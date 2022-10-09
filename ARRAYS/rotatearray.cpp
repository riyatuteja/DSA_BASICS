//O(n*k)
#include<iostream>
using namespace std;
void rotateleftbyone(int arr[],int n)
{
    int temp=arr[0],i;
    for(i=0;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}
void rotatearray(int arr[],int k,int n)
{
    for (int i = 0;i<k;i++)
    {
        rotateleftbyone(arr,n);
    }
    

}

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    rotatearray(arr,k,n);
     for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
 cout<<endl;
    

    
    

}