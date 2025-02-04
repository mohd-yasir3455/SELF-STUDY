#include<iostream>

using namespace std;

void swapArr(int arr[] ,int n){
    for (int i = 0; i < n; i+=2)
    {if (i+1<n)
    {
        swap(arr[i],arr[i+1]);

        
    }
    
    }
    
}

void display(int arr[] , int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

int main(){

    int even[8] ={1,54,2,6,0,9,23,43};
    int odd[5] ={-2,5,23,33,74};

    swapArr(odd , 5);
    display(odd , 5);


}