#include <iostream>
using namespace std;
#define mod  1000000007
int cnt = 0 ;
void Try (int n, int k, int step){
    if (step == n){
        cnt++;
        cnt %= mod;
        return;
    }
    for (int i = 1; i <= k; i++){
        if (step + i <= n){
            Try(n, k, step + i);
        }
    }
}
int main (){
    int t;
    cin >> t;
    while (t--){
        cnt = 0;
        int n , k ;
        cin >> n >> k;
        Try(n, k, 0);
        cout << cnt << endl;
    }
    return 0;
}