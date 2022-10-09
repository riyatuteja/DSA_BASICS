#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    int arr[T];
    int sum=0;
    for (int i=0;i<T;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
        cout<<sum<<" ";
    }
    cout<<endl;
    return 0;

}