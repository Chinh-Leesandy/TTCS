#include <iostream>
#include<math.h>
using namespace std;
int luythua (int x, int n){
    if (n == 0)
        return 1;
    int tmp = pow(x, n/2);
    if (n % 2 == 0)
        return tmp * tmp;
    else   
        return x * tmp * tmp;
    
}
int findK(int n, int k){
    int mid = (luythua(2,n) + 1 ) / 2;
    if (n == 1) return 1;
    if (k == mid) return n;
    if (k < n) return findK(n-1, k);
    else return findK(n-1, k-mid);
}
int main (){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        cout << findK(n, k);
    }
}