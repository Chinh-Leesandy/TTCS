#include <iostream>
#include <vector>
using namespace std;
void quickSort(int a[], int left, int right) {
    int i = left, j = right;
    int pivot = a[(left + right) / 2];
    while (i <= j) {
        while (a[i] < pivot) 
            i++;
        while (a[j] > pivot) 
            j--;
        if (i <= j) {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    if (left < j) 
        quickSort(a, left, j);
    if (i < right) 
        quickSort(a, i, right);
}
int main() {
    int n;
    cin >> n;
    int a[10000];
    for (int i = 0; i < n ;i++)
        cin >> a[i];
    quickSort(a, 0, n - 1);
    for (int i = 0; i < n; i++) 
        cout << a[i] << " ";
    cout << endl;
    return 0;
}
