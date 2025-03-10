#include<iostream>
using namespace std;

int partition(int* arr  , int s   , int e){
    int pivot = arr[s];

    int cnt =0;

    for (int i = s+1; i <=e; i++)
    {
       if (arr[i]<=pivot)
       {
        cnt++; 
       }
       
    }
    //place pivot at right position 
    int pivotIndex = s+cnt;
    swap(arr[pivotIndex],arr[s]);

//doing left and right part 
int i =s , j=e;

while (i<pivotIndex && j>pivotIndex)
{
    while (arr[i]<pivot)
    {
      i++;
    }
    
     while (arr[j]>pivot)
    {
      j--;
    }
    swap(arr[i++],arr[j--]);

}
    return pivotIndex;

    
}
void quick_sort(int* arr  , int s   , int e){
    //base case 
    if (s>=e) return;
    
    //doing partition 
    int p = partition(arr , s ,e);
    //sorting ;eft part
    quick_sort(arr,s,p-1);

    quick_sort(arr , p+1 , e);
}
int main() {
  
int arr[5]={2,41,1,92,55};
int n =5 ; 

quick_sort(arr , 0 , n-1);

for (int i = 0; i < n; i++)
{
  cout<<arr[i]<<" ";
}
cout<<endl;

return 0 ;
}