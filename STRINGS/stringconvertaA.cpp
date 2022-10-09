#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s="abcdefghijklmnopqrstuvwxyz";

    /*for (int i = 0; i < s.size(); i++)
    {
      if(s[i]>='a'&&s[i]<='z')
      {
          s[i]-=32;
      }
      cout<<s[i];
    }
    cout<<endl;
    for (int i = 0; i < s.size(); i++)
    {
      if(s[i]>='A'&&s[i]<='Z')
      {
          s[i]+=32;
      }
      cout<<s[i];
    }
    cout<<endl;*/
     transform(s.begin(),s.end(),s.begin(), ::toupper);
     cout<<s<<endl;
     transform(s.begin(),s.end(),s.begin(), ::tolower);
     cout<<s<<endl;

    return 0;
}