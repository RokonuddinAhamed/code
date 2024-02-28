/*
Author: Rokon Uddin
https://codeforces.com/profile/Rokonuddin_Ahamed_Sohan
*/
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
const ll N = 1000;
vector<ll> v[N];
bool vis[N];
ll level[N];
ll pre[N];
ll n, e;

void Path(int child)
{
    if (pre[child] == 0)
    {
        cout << pre[child] << " ";
    }
    else
    {
        Path(child - 1);
        cout << pre[child] << " ";
    }
}
void bfs(ll x)
{
    queue<ll> q;
    q.push(x);
    vis[x] = true;
    while (!q.empty())
    {
        ll cur = q.front();
        cout << cur << " ";
        q.pop();
        for (auto next : v[cur])
        {
            if (vis[next] == 0)
            {
                vis[next] = true;
                level[next] = level[cur] + 1;
                pre[next] = cur;
                q.push(next);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> e;
    for (ll i = 0; i < e; i++)
    {
        ll x, y;
        cin >> x >> y;
        v[x].pb(y);
    }
    ll source;
    cin >> source;
    bfs(source);
    cout << endl;
    for (ll i = 0; i < n; i++)
    {
        cout << i << " Weight: " << level[i] << " Path: ";
        Path(i);
        cout << i << endl;
    }

    return 0;
}