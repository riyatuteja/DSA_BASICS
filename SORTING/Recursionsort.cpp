#include<iostream>
using namespace std;

bool sorted(int arr[], int n)
{
    if(n==1)
    {
        return true ;
    }
    return (arr[0]<arr[1] && sorted(arr+1,n-1));
}
int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    if(sorted(arr,n)==1)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }

    return 0;
}
