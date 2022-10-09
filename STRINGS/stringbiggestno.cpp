#include<iostream>
using namespace std;
#include<string>

int main()
{
    string s;cin>>s;
   

    for(int i=0;i<s.size();i++)
    {
      
        int current=s[i];
        int j=i-1;
        while(s[j]<current && j>=0)
        {   
            
            s[j+1]=s[j];
            
            j--;
        }
        s[j+1]=current;
    }
    cout<<s<<endl;
    
}
