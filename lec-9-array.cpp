#include<iostream>
using namespace std;

int arraySum(int arr[],int n)
{ int sum=0;

    for (int i = 0; i < n; i++)
    {
        sum +=arr[i];
    }
    return sum;
    
}
int main(){

    int n ;
    cout<<"enter the no of elements in array \n";
    cin>>n;
     int arr[n];
   cout<<"enter the value of elements in array \n";
     for (int i = 0; i < n; i++)
     {
       cin>>arr[i];
     }

     int sum =arraySum(arr , n);

     cout<<"the sum of all element of array is:"<<sum<<endl;
     


}