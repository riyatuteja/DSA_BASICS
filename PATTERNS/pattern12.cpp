//pallindromic pattern
/*
      1 
    2 1 2 
  3 2 1 2 3 
4 3 2 1 2 3 4
*/
#include<iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" "<<" ";
        }
        
    }
}