#include <iostream>
#include<vector>
#include<queue>
using namespace std;
const int MAX = 1005;
vector<int> arr[MAX]; 
bool visited[MAX]; 
void bfs(int u) {
    queue<int> q; 
    q.push(u); 
    visited[u] = true; 

    while (!q.empty()) { 
        int v = q.front(); 
        q.pop();
        cout << v << " "; 
        for (int k : arr[v]) {
            if (!visited[k]) {
                q.push(k); 
                visited[k] = true; 
            }
        }
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, u;
        cin >> n >> m >> u;
        for (int i = 1; i <= n; i++) {
            arr[i].clear();
            visited[i] = false;
        }
        for (int i = 1; i <= m; i++) {
            int a, b;
            cin >> a >> b;
            arr[a].push_back(b);
            arr[b].push_back(a);
        }
        bfs(u);
        cout << endl;
    }
    return 0;
}
