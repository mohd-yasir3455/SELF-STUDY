#include<iostream>
using namespace std;
void print (int arr[], int s , int e ){
    for (int i = s; i <=  e; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int binary(int arr[] , int n , int key){
int start = 0;
int end = n-1;
    int mid = (start + end)/2;
while(start<= end)
{
    if (arr[mid]>key)
    {
        end = mid -1;
    }
    else if ( arr[mid] < key){
        start = mid +1;
    }
    else if (arr[mid] == key)
    {
        return mid;
    }
         mid = (start + end)/2;
}
return -1;
}


//using recursion


int binary_recursion(int arr[] , int s , int e , int key){
    print(arr,s,e);
    int mid =s+(e-s)/2;

    if (s>e)
    {
      return -1;
    }
    
    if (arr[mid]==key)
    {
       return mid;
    }
     else if ( arr[mid] < key){
      return binary_recursion(arr , mid+1,e,key);
    }
    else if (arr[mid]>key)
    {
      return binary_recursion(arr , s,mid-1,key);
    }
        
    
}


int firstIndex(int  nums[] , int target){
        int s =0;
        int e = sizeof(nums)/sizeof(nums[0]);

        while(s<e){
        int mid = s+ (e-s)/2;
            if( target > nums[mid]){
                s  = mid+1;
            }
            else{
                e = mid-1;
            }

        }
        return s;
    }

int main(){
    int n  , key;
    cout<<"enter the no of elemenrs in array"<<endl;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }

     cout<<"enter the to search in array"<<endl;
    cin>>key;
int result = binary(arr , n , key);
cout<<"the element "<<key <<" found at index "<<result<<endl;;

int result1 = binary_recursion(arr , 0 , n-1 , key);
cout<<"the element "<<key <<" found at index "<<result1;

cout<<"first index of elelment is "<<firstIndex(arr , key);



    
}