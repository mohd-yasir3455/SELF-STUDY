//first find the last and first index of the element then the diffrence of them is the no of times the element is present in the array

//array should me sorted
#include<iostream>
using namespace std;

int firstocc(int arr[] , int n , int key){
    int start =0 , end =n-1 , ans =-1;
int mid = start +(end - start)/2;
    while (start<end)
    {
        if (arr[mid]==key)
        {
            end = mid-1;
            ans= mid;
        }
        else if (arr[mid]>key){
            end = mid-1;
        }
         else if (arr[mid]<key){
            start = mid+1;
        }
    }
    return ans;
}

int lastocc(int arr[] , int n , int key){
    int start =0 , end =n-1 , ans =-1;
int mid = start +(end - start)/2;
    while (start<end)
    {
        if (arr[mid]==key)
        {
           start = mid+1;
            ans= mid;
        }
        else if (arr[mid]>key){
            end = mid-1;
        }
         else if (arr[mid]<key){
            start = mid+1;
        }
    }
    return ans;
}

int main(){

    int arr[6] = {1,2,3,3,3,6};
int result = firstocc(arr , 6 , 3);
int result1 = lastocc(arr , 6 , 3);

cout<<"the occurance of 3 is "<<result1-result;

    return  0 ;
}