#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{   
    if (n==1)
    {
        cout<<"1";
        return 1;
    }
    else
    {
        if(n>1){cout<<n<<"X";}
        
         return n*fact(n-1);
    }
    
    return 0;
}    
int main()
{
    int n;
    cin>>n;
    
    
    cout<<fact(n)<<endl;

}