#include<iostream>
#include<algorithm>
using namespace std;
int main (){
    int n , s, count;
    int a[1000];
    cin >> n >> s;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort (a, a+n, greater<int>());
    for (int i = 0; i < n && s > 0; i++){
        if (a[i] <= s){
            count = s / a[i];
            s %= a[i];
        }
    }
    cout << count ;
}