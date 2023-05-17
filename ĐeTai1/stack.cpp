#include<iostream>
#include<stack>
using namespace std;
int main (){
    // khởi tạo stack
    stack <int> st;
    // thêm phần tử vào đầu stack
    st.push(2);
    st.push(3);
    st.push(5);
    st.push(9);
    // lấy ra phần tử đầu tiên và không xóa khỏi stack
    cout << st.top() << endl;
    // xóa phần tử đầu tiên khỏi stack 
    st.pop();
    if (st.empty() ){
        cout << "stack is empty" << endl;
    }
    else{
        cout << "stack is not empty" << endl;
    }
    // in ra các phần tử trong stack
    while (!st.empty()){
        cout << st.top() <<' ';
        st.pop();
    }
    
}