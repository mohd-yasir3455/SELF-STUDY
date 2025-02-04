//MEDIAN OF THE ARRAY 

#include<iostream> 
#include <algorithm>
#include <vector>
using namespace std; 

int main(){
int n;
cout<<"enter the size of array";
cin >>n ; 
vector<int> arr(n);
cout<<"enter the element of array/vector"<<endl;
for(int i =0 ; i < n ; i++){
cin>>arr[i];
}
sort(arr.begin() , arr.end());
if(n%2==0){
float ans = arr[n/2+1] + arr[n/2];
cout << "the median is :"<<ans/2;
}
else{
cout << "the median is :"<<arr[n/2 ];}
return 0;
}