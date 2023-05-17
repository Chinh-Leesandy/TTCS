#include <iostream>
#include<vector>
#include<queue>

using namespace std;
#define ii pair<int, int>
#define iii pair<ii, int>
vector<ii> a[105];
int ans[105][105];

void Dij(int i, int n)
{
    priority_queue<ii, vector<ii>, greater<ii>> q;
    q.push({0, i});
    while (q.size())
    {
        int u = q.top().second, c = q.top().first;
        q.pop();
        for (int j = 0; j < a[u].size(); j++)
        {
            int v = a[u][j].first;
            if (v != i && (a[u][j].second + c < ans[i][v] || ans[i][v] == 0))
            {
                ans[i][v] = a[u][j].second + c;
                q.push({a[u][j].second + c, v});
            }
        }
    }
}
int main()
{
    int n, m, q, u, v, c;
    cin >> n >> m;
    while (m--)
    {
        cin >> u >> v >> c;
        a[u].push_back({v, c});
        a[v].push_back({u, c});
    }
    for (int i = 1; i <= n; i++)
        Dij(i, n);
    cin >> q;
    while (q--)
    {
        cin >> u >> v;
        cout << ans[u][v] << endl;
    }
}