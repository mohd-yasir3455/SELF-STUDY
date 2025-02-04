#include<iostream>
#include<math.h>

using namespace std;

int main(){
int n , i =0;;
    cout<<"enter the no."<<endl;
    cin>>n;
int ans=0;
    while (n!=0)
    {  //last bit of the number
        int bit  = n&1;

        ans =(bit*pow(10,i))+ ans;

        n=n>>1;
        i++;
        
    }
    cout<<"the binary conversion is "<<ans;
    
}