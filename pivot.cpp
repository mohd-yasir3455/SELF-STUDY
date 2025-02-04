//it has first increasing order element then descreasing order elemnt 
//pivot is soming the lowest element in array 
#include<iostream>
using namespace std;
int pivot(int arr[], int n){

    int s =0 ;
    int e = n-1;
    int mid = s+(e-s)/2;

    while (s<e)
    {//means at the increasing order line
        if (arr[mid]>=arr[0]) 
        {
         s = mid+1;  
        }
        else{ e =mid;}
       mid = s+(e-s)/2;
        
    }
    return s;
    
}


int main(){

    int arr[8] ={12,22,356,1121,2,3,4,5};
    int ans = pivot(arr , 8);

    cout<<"the pivot element is "<<arr[ans]<<" at index "<<ans;
}