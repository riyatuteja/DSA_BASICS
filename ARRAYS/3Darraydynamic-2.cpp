#include<iostream>
using namespace std;
void declare(int no_of_2darray, int row_each,int column_each,int*** p)
{
    for (int i = 0; i < no_of_2darray; i++)
    {
        p[i]= new int*[row_each];

        for(int j=0;j<row_each;j++)
        {
            p[i][j]= new int[column_each];
        }
    }
}
void input(int no_of_2darray, int row_each,int column_each,int*** p)
{
    for(int i=0;i<no_of_2darray;i++)
    {
        for(int j=0;j<row_each;j++)
        {
            for(int k=0;k<column_each;k++)
            {
                cin>>p[i][j][k];
            }
        }
    }    
}
void print(int no_of_2darray, int row_each,int column_each,int*** p)
{
    for(int i=0;i<no_of_2darray;i++)
        {
            for(int j=0;j<row_each;j++)
            {
                for(int k=0;k<column_each;k++)
                {
                    cout<<p[i][j][k]<<" ";
                }
                cout<<endl;
            }  
            cout<<endl;
        } 
}
void deletion(int no_of_2darray, int row_each,int*** p)
{
    for(int i=0;i<no_of_2darray;i++)
    {
        for(int j=0;j<row_each;j++)
        {
            delete[] p[i][j];
        }

        delete[] p[i];
    }
    delete[] p;
  }
int main()
{
    int no_of_2darray;cin>>no_of_2darray;
    int row_each;cin>>row_each;
    int column_each;cin>>column_each;

    int*** p=new int**[no_of_2darray];

    declare(no_of_2darray,row_each,column_each,p);
   input(no_of_2darray,row_each,column_each,p);
    print(no_of_2darray,row_each,column_each,p);
     deletion(no_of_2darray,row_each,p);
    
    return 0;
}