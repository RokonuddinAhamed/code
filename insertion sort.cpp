
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int ar[n];
  for(int i=0;i<n;i++)
  {
    cin>>ar[i];
  }
  //for j = 2 to A.length
  for(int j=1;j<n;j++)
  {
    int key=ar[j];
    int i=j-1;
    // Insert A [i] into the sorted sequence A[1… i-1]
    // j = i - 1
    // while j>0 and A[j] > key
    //     A[j+1] = A[j]
    //     j = j - 1
    // A[j + 1]  =  key

    while(i>=0 && ar[i]>key)
    {
        ar[i+1]=ar[i];
        i--;
        ar[i+1]=key;
    }
  }
  for(int i=0;i<n;i++)
  cout<<ar[i]<<" ";
  cout<<endl;
}
