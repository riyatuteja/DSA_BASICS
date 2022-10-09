/*
1 1 1 1
2 2 2
3 3
4
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=n-i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}