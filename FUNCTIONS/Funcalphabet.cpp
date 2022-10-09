#include<bits/stdc++.h>
using namespace std;
bool check(char ch)
{
    if(int(ch)>=65&&int(ch)<=90|| int(ch)>=97&&int(ch)<=122)
    {
        return  true;
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
        char ch;
        cin>>ch;

        if(check(ch)==false)
        {
            cout<<"Not an alphabet"<<endl;
        }
        else
        {
            cout<<"is an alphabet"<<endl;
        };

    }

}