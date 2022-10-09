#include<iostream>
using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;

    int arr[n];
    int Max=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        Max=max(Max,arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int result=arr[i]+x;
        if(Max>result)
        {
            cout<<"false"<<endl;
        }
        else
        {
            cout<<"true"<<endl;
        }
        

    }
    
}