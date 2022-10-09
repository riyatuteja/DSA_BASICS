#include<iostream>
using namespace std;
void swap(int i,int j)
{
    int temp=i;
    i=j;
    j=temp;
    cout<<i<<j;
    
}
int main()
{
    int i,j;
    cin>>i>>j;
     swap(i,j);
    
    return 0;
}