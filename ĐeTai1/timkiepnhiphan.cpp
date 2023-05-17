#include<iostream>
using namespace std;
int binary_Search(int l, int r, int x, int a[]){
    while (l <= r){
        int mid = (l+r)/2;
        if (x == a[mid]) return 1;
        if (x < a[mid]) return binary_Search(l, mid-1, x, a);
        else return binary_Search(mid+1, r, x, a);
    }
    return -1;
}
int main (){
    int n, x;
    cin >> n >> x;
    int a[10000];
    for (int i = 0 ; i < n ; i++)
        cin >> a[i];
    cout << binary_Search(0, n-1, x, a);
}