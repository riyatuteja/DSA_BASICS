//7 5 3 9 4 2 0
/* 0   7 5 3 9 4 2 
   0 2   7 5 3 9 4
   0 2 3   7 5 9 4
   0 2 3 4   7 5 9
   0 2 3 4 5   7 9
   0 2 3 4 5 7   9
   0 2 3 4 5 7 9 
*/

#include<iostream>
using namespace std;
void selection_sort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j= i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }

        }
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
    int n;cin>>n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>a[i];
    }

    selection_sort(a,n);
    printarray(a,n);

    return 0;
    
}