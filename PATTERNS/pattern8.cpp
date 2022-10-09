/*
1
1 2 
1 2 3
1 2 3 4
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int count =1;
        for(int j=0;j<=i;j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}