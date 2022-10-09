#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotate(vector< vector<int> > arr)
{
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<i;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i=0;i<arr.size();i++)
    {
        reverse(arr[i].begin(),arr[i].end());
    }

}
int main()
{
    vector < vector < int > > arr;
  for (int i=0;i<3;i++)
  {
    for (int j =0;j<3;j++)
    {
        cin>>arr[i][j];
    }
  }
  rotate(arr);
  for(int i=0;i<arr.size();i++)
  {
      for(int j=0;j<arr.size();j++)
      {
          cout<<arr[i][j]<<" ";
      }
      cout<<endl;
  }
  return 0;
  
}