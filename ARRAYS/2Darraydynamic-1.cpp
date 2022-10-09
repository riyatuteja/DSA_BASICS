#include<iostream>
using namespace std;
void input(int row,int column,int* a)
{
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
           cin>> *(a+ (i*column) + j) ;
        }
    }
}
 void print (int row,int column,int* a)
 {
      for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
           cout<< *(a+ (i*column) + j) <<" ";
        } 
        cout<<endl;
    }
   
 }
int main()
{
    int row;cin>>row;
    int column;cin>>column;

    int* a= new int[row*column];

    input(row,column,a);
    print(row,column,a);
    delete[] a;
    return 0;
}