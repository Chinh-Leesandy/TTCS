#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}
int Priority (char c){
    if (c == '+' || c == '-') return 1;
    if (c == '*' || c == '/') return 2;
    return 0;
}
string TTSHT (string s ){
    stack <char> st;
    string res = "";
    for (int i = 0 ; i < s.size(); i++){
        if (isalnum(s[i])){
            res += s[i];
        }
        else if (s[i] == '('){
            st.push(s[i]);
        }
        else if (s[i] == ')'){
            while (!st.empty() && st.top() != '('){
                res += st.top();
                st.pop();
            }
            if (!st.empty()) st.pop();
        }
        else if (isOperator(s[i])){
            while (!st.empty() && isOperator(st.top() && Priority(st.top()) >= Priority(s[i]))){
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty()){
        res += st.top();
        st.pop();
    }
    return res;
}
int main(){
    string s;
    cin >> s;
    cout << TTSHT(s);
}