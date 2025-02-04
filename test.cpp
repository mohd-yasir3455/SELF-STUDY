#include<iostream>
#include<math.h>
using namespace std;
unsigned int  binary(int n){
  unsigned  int ans =0;
    int i =0;
     while (n!=0)
    {  //last bit of the number
        int bit  = n&1;

        ans =(bit*pow(10,i))+ ans;

        n=n>>1;
        i++;
        
    }return ans;
}
int main(){
    int n = 16;
    // cout<<binary(16);
    cout<<binary(n)<<endl;
    cout<<binary(n-1)<<endl;
int j =binary(n)&binary(n-1);
  cout<<j ;
}