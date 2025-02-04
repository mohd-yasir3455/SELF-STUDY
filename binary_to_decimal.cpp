#include<iostream>
#include<math.h>

using namespace std;

int main(){
int n ;
int i =0 , ans=0;
cout<<"enter the binary no"<<endl;
cin>>n;

while (n!=0)
{
    int digit = n%10;

    if (digit==1)
    {
      ans = ans + pow(2,i);  
    }
    i++;
    n=n/10;
    
}
cout<<"the decimal value is "<<ans;

}