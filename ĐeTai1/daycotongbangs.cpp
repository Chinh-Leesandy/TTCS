#include<iostream>
#include<algorithm>
using namespace std;
int n, s;
int binary_Search(int l, int r, int x, int a[]){
    while (l <= r){
        int mid = (l+r)/2;
        if (x == a[mid]) return 1;
        if (x < a[mid]) return binary_Search(l, mid-1, x, a);
        else return binary_Search(mid+1, r, x, a);
    }
    return -1;
}
bool findS(int a[], int s){
    for (int  i = 0 ; i < n; i++)
    {
        int tmp = s - a[i];
        int ans = binary_Search(i+1, n - 1, tmp, a);
        if (ans != -1){
            return true;
        }
    }
    return false;
}
int main (){
    cin >> n >> s;
    int a[1000];
    for (int i = 0 ; i < n ; i++)
        cin >> a[i];
    sort (a, a+n);
    if (findS(a, s) == 1)
        cout << "YES";
    else
        cout << "NO";
}