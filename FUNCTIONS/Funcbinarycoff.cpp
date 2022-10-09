//binary cofficient nCr=(n!)/(r!)*(n-r)!
#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    
        return n*fact(n-1);

}
int main()
{
    int n,r;
    cin>>n>>r;

    int res=fact(n)/(fact(r)*fact(n-r));
    cout<<res<<endl;
    return 0;
}