#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
struct gp
{
    pair<int, int> vertex;
    int weight;
};

bool cmp(gp &a, gp &b)
{
    return a.weight < b.weight;
}
int main()
{
    int n;
    cin >> n;
    gp vr[n];
    cout<<"Before sort the input of graps \n";
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        vr[i].vertex = {a, b};
        vr[i].weight = c;
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    sort(vr, vr + n, cmp);
    cout<<"After sort the input of graps according to weight \n";
     for (int i = 0; i < n; i++)
     cout<<vr[i].vertex.first<<" "<<vr[i].vertex.second<<" "<<vr[i].weight<<endl;
}
