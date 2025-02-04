#include<iostream>
using namespace std;

int binary(int arr[] , int n , int k){
    int s =0 ; 
    int e = n-1;
    int mid ;

    while(s<e){
        if (arr[mid]>k)
        {
            e = mid;
        }
        else if(arr[mid]<k){
            s =mid;

        }
        else if (arr[mid]==k)
        {
           return n-mid;
        }
    }
    return n -e;
}

int main() {
  int arr[]={1,4,8,9,12,17,21,28,29};
  int n = binary(arr , 9 , 13);
  cout<<n;




return 0 ;
}