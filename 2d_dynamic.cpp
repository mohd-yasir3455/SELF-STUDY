#include<iostream>
using namespace std;

int main() {
  int row , col ; 
  cin>>row;

int **arr = new int*[row];

for (int i = 0; i < row; i++)
{
   arr[i] = new int[col];
}

//taking input 

for (int i = 0; i < row; i++)
{ cout<<"enter the value"<<i+1<<"  column"; 
cin>>col;
    for (int j = 0; j < col; j++)
    {
       cin>>arr[i][j];
    }
    
}
//showing output

for (int i = 0; i < row; i++)
{ 
    for (int j = 0; j < col; j++)
    {
       cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

//releasing memory
for (int i = 0; i < row; i++)
{
    delete [] arr[i];
}

delete []arr;


return 0 ;
}