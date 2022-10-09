#include<bits/stdc++.h>
using namespace std;
void check(int n)
{
    if(n%2==0)
    {
        cout<<"even"<<endl;
    }
    else
    {
        cout<<"odd"<<endl;
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
        
        check(n);
    }

    return 0;
}