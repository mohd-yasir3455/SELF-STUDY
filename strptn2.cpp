#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter the no of rows"<<endl;
    cin>>n;


for (int i = 1; i <= n; i++)
{ //spaces
    for (int j = n-i; j >=0; j--)
    {
        cout<<" ";
    }
    //inner triangle
   for ( int j = 1; j <= i; j++)
        {
            cout<<j;
        }
        //outer triangle
        for (int st =i-1 ; st>0; st--)
        {
           cout<<st;
        }
        
    
    
cout<<endl;

}}