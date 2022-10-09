// 6 3 8 2 6 1 5 8
/*
   
    3 6   8 2 6 1 5 8 \\
    3 6 8   2 6 1 5 8
    2 3 6 8   6 1 5 8
    2 3 6 6 8   1 5 8
    1 2 3 6 6 8   5 8
    1 2 3 5 6 6 8   8
    1 2 3 5 6 6 8 8
*/
#include<iostream>
using namespace std;
void insertion_sort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int current=a[i];
        int j=i-1;
        while(a[j]>current && j>=0)
        {   
            
            a[j+1]=a[j];
            
            j--;
        }
        a[j+1]=current;
    }

}
void printarray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
    
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    insertion_sort(a,n);
    cout<<".     ";
    printarray(a,n);
    return 0;
}