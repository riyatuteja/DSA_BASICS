#include<iostream>
using namespace std;
void sum(int n)
{
    int res=(n*(n+1))/2;
    cout<<res<<endl;

}
int main()
{
    int n; cin >>n;
    sum(n);
}