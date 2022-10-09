#include<iostream>
using namespace std;
bool check(int a,int b,int c)
{
    int X= max(a,max(b,c));
    int Y,Z;

    if(X==a)
    {
        Y=b;
        Z=c;
    }
    else if(X==b)
    {
        Y=a;
        Z=c;
    }
    else 
    {
        Y=a;
        Z=b;
    }

    if(X^2==Y^2+Z^2)
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
    int a,b,c;
    cin>>a,b,c;
    if(check(a,b,c))
    {
        cout<<"is a pythagorean triplet";
    }
    else
    {
        cout<<"not a pythagorean triplet";
    }
    return 0;
}
