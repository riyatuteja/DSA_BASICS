#include<bits/stdc++.h>
using namespace std;
int maximum(int a[3])
{
    int res=0;
    for(int i=0;i<3;i++)
    {
        res=max(res,a[i]);
    }   
    return res;

}
int minimum(int a[3])
{
    int res=INT_MAX;
    for(int i=0;i<3;i++)
    {
        res=min(res,a[i]);
    }   
    return res;

}
int main()
{
    int a[3];
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    cout<<maximum(a)<<" "<<minimum(a)<<endl;
}