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
/*In the provided code, the graph is represented using an array of structures. 
Here's how it works:
struct gp { 
pair<int, int> vertex; 
int weight; }; 
This structure gp represents an edge in the graph. It contains two components:
vertex: This is a pair of integers representing the vertices connected by the edge.
weight: This is an integer representing the weight of the edge.
So, each element of the array vr is of type gp, representing an edge in the graph
gp vr[n]; 
In the main() function, this array is used to take input for the graph. 
The input format seems to be:
For each edge, three integers are provided: the starting vertex, the ending vertex, and the weight of the edge.
for (int i = 0; i < n; i++) 
{ int a, b, c; cin >> a >> b >> c;
 vr[i].vertex = {a, b};
 vr[i].weight = c; } 
Here, a and b represent the vertices, and c represents the weight of the edge connecting them. This information is then stored in the vertex and weight components of the gp structure respectively.
So, essentially, the array vr acts as an adjacency list representation of the graph where each element represents an edge, and the vertices and weights are stored within each element.


The grap also can represent by vector of pair "vector<pair<pair<int,int>,int>graps", and also by 2D array "graps[n][3]";
*/
