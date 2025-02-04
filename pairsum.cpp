#include<iostream>

using namespace std;

int main (){
 int n =5;
    int arr[n]={1,2,3,4,5};
    int ans[n];
    //show the elements whose sum is 

    for (int i = 0; i < n; i++)
    {
       for (int j = i+1; j < n;j++)
       {
        if (arr[i]+arr[j]==5)
        {
           cout << arr[i]<<" "<<arr[j];
        }
        cout<<endl;
        
       }
       
    }
  
    
    
}
