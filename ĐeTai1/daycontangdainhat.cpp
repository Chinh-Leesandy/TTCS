#include <iostream>
#include <algorithm>
using namespace std;
int lis(int a[], int n) {
    int L[n];
    L[0] = 1;
    for (int i = 1; i < n; i++) {
        L[i] = 1;
        for (int j = 0; j < i; j++) {
            if (a[j] < a[i]) {
                L[i] = max(L[i], L[j] + 1);
            }
        }
    }
    return *max_element(L, L + n);
}
int main() {
    int n;
    cin >> n;
    int a[10000];
    for (int i = 0;i < n; i++)
        cin >> a[i];
    cout <<  lis(a, n) << endl;
    return 0;
}
