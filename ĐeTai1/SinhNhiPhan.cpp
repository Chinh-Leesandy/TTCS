#include <iostream>
using namespace std;
int a[100], n;
void init(int a[], int n)
{
    // khởi tạo cấu hình đầu
    for (int i = 0; i < n; i++)
        a[i] = 0;
}
void sinhnp(int a[], int n){
    int ok = 1;
    while (ok != 0)
    {
        // in ra xau nhi phan
        for (int i = 0; i < n; i++)
            cout << a[i];
        cout << endl;
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
    cin >> n;
    init(a, n);
    sinhnp(a,n);
}