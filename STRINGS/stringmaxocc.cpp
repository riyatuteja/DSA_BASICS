#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s="skmoxnlkdcskajksdjksd";
    int freq[26]={0};
    for (int  i = 0; i < s.size(); i++)
    {
        freq[s[i]-'a']++;
    }

    char ans='a';
   
    int max=0;
    for (int i = 0; i < 26; i++)
    {
        if (max<freq[i])
        {
            max=freq[i];
            ans='a'+i;
        }
        
    }
    
    cout<<max<<" "<<ans<<endl;

    return 0;
    
}