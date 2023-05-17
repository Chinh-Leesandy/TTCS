#include <iostream>
using namespace std;
int a[100], n, k;
void init(int a[], int n)
{
    for (int i = 0; i < n; i++)
        a[i] = 0;
}
void xuat (int a[], int n){
    for (int i = 0; i < n; i++)
            cout << a[i];
        cout << endl;
}
void sinhnp(int a[], int n, int k){
    int ok = 1;
    while (ok != 0)
    {
        int d = 0;
        for (int j = 0; j < n; j++){
            if (a[j] == 1) d++;
        }   
        if (d == k) xuat(a,n);
        int i = n - 1;
        while (i >= 0 && a[i] == 1)
        {
            a[i] = 0;
            i--;
        }
        if (i == -1)
            ok = 0;
        a[i] = 1;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--){
        cin >> n >> k;
        init(a, n);
        sinhnp(a,n,k);
    }
}