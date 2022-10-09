#include<iostream>
using namespace std;
void input(int row,int column,int** p)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cin>>p[i][j];
             
        }
    }
    
}
void print (int row,int column,int** p)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<p[i][j]<<" ";
             
        }
        cout<<endl;
    }
}

void deletion(int row,int** p)
{
     for(int i=0;i<row;i++)
     {
         delete [] p[i];
     }

     delete [] p;
}
int main()
{
    int row; cin>>row;
    int column; cin>>column;

    int** p= new int*[row];//memory allocation

    for(int i=0;i<row;i++)
    {
        p[i]=new int[column];//declaration
    }

    input(row,column,p);

    print(row,column,p);
 
    deletion(row, p);

     return 0;

}