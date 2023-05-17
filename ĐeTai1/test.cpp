#include <iostream>
#include <vector>

using namespace std;

int longest_jump(vector<int> A, int P) {
    int left = 1, right = A.size(), result = 0;
    while (left <= right) {
        int mid = (left + right) / 2;
        int j = 0;
        for (int i = 0; i < A.size(); i++) {
            while (j < A.size() && A[j] - A[i] < P) {
                j++;
            }
            if (j - i >= mid) {
                result = mid;
                left = mid + 1;
                break;
            }
        }
        if (j == A.size()) {
            right = mid - 1;
        }
    }
    return result;
}

int main() {
    int N, P;
    cin >> N >> P;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int ans = longest_jump(A, P);
    cout << ans << endl;
    return 0;
}
