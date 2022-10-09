#include<iostream>
using namespace std;
void input(int no_of_2darray, int row_each,int column_each,int* p)
{
  for(int i=0;i<no_of_2darray;i++)
  {
      for(int j=0;j<row_each;j++)
      {
          for(int k=0;k<column_each;k++)
          {
              cin>>*(p + i*column_each*row_each +j*column_each+k);
          }
      }
  }
}

void print(int no_of_2darray, int row_each,int column_each,int* p)
{
  for(int i=0;i<no_of_2darray;i++)
  {
      for(int j=0;j<row_each;j++)
      {
          for(int k=0;k<column_each;k++)
          {
              cout<<*(p + i*column_each*row_each +j*column_each+k)<<" ";
          }
          cout<<endl;
      }
       cout<<endl;
  }
}
int main()
{
    int no_of_2darray; cin>>no_of_2darray;
    int row_each; cin>>row_each;
    int column_each; cin>>column_each;

    int* p= new int[no_of_2darray*row_each*column_each];

    input( no_of_2darray,  row_each, column_each, p);
     print( no_of_2darray,  row_each, column_each, p);

     delete[] p;
     return 0;
}