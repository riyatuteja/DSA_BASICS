// 1 2 3 5 8 13 21 34 55 89
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int fib[n];

    for(int i=1;i<=n;i++)
    {
        
        if (i==1)
        {
            fib[i]=1;
            cout<<fib[i]<<" ";
            continue;
        }
        else if(i==2)
        {
            fib[i]=2;
            cout<<fib[i]<<" ";
            continue;
        }
        else
        {
           fib[i]=fib[i-1]+fib[i-2];
           cout<<fib[i]<<" ";
           continue;
        }
    }
        
    return 0;

}