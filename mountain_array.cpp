#include<iostream>
using namespace std;

void pivot(int arr[] , int e){
    int s =0; 
    int mid = (e+s)/2;

    for (int i = 0; i < e; i++)
    {
       if (arr[mid]>arr[mid+1])
       {
        s = mid+1;
       }
       if (arr[mid]>arr[mid+1])
       {
     e = mid-1;
       }
       
       
       
    }
    
}

int main() {
  
int arr[11] ={0,1,2,3,4,5,10,1,2,-1,-2}

pivot(arr[] ,11);
return 0 ;
}