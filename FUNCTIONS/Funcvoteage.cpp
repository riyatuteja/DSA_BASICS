#include<iostream>
using namespace std;

bool check(int n)
{
    if ( n>=18)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        int n;
        cin>>n;

       if( check(n))
       {
           cout<<" is enligible"<<endl;
       }
       else{
       cout<<"is not enligible"<<endl;
       }

    }
}