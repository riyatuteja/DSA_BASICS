#include<bits/stdc++.h>
using namespace std; 
int linearsearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n,key;
    cin>>n>>key;
    int arr[n];
    cout<<linearsearch(arr,n,key)<<endl;

    return 0;
   
}