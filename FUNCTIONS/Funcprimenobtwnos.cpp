#include<iostream>
using namespace std;
bool isprime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
        continue;
    }
    return true;    
}
void display(int n1 ,int n2)
{
    for(int i=n1;i<=n2;i++)
    {
        if(isprime(i))
        {
            cout<< i<<" ";
        }
        else
        {
            continue;
        }
    }
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;

    display(n1,n2);
     cout<< endl;
     
    return 0;
}