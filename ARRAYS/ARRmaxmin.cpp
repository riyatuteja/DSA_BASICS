#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (
        int i=0;i<n;i++
    )
    {
        cin>>arr[i];
    }
     int Max =INT_MIN;
     int Min=INT_MAX;

     for(int i=0;i<n;i++)
     {
         Max=max(Max,arr[i]);
         Min=min(Min,arr[i]);
     }
     cout<<Min<<Max;
}