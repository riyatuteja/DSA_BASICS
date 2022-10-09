// 5 8 3 9 1 7
/*
   5 8    3 9 1 7
   5 3 8    9 1 7
   5 3 8 9    1 7
   5 3 8 1 9    7
   5 3 8 1 7 9

   3 5     8 1 7 9
   3 5 8     1 7 9
   3 5 1 8     7 9
   3 5 1 7 8     9
   3 5 1 7 8 9

   3 5       1 7 8 9
   3 1 5       7 8 9
   3 1 5 7       8 9
   3 1 5 7 8       9
   3 1 5 7 8 9

   1 3 5 7 8 9

   */
#include<iostream>
using namespace std;
 
void bubble_sort(int A[],int n)
{
    for(int j=0;j<n-1;j++)
    {
        for(int i=0;i<n-j-1;i++)
        {
            if(A[i]>=A[i+1])
            {
                int temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;
            }
            else{continue;}
        }
    }
}
void printarray(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;cin>>n;
    int A[n];

    for (int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    bubble_sort(A,n);
    printarray(A,n);
    return 0;
}