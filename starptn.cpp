#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter the no of rows"<<endl;
    cin>>n;

 
    for (int i = 1; i <= n; i++)
    {
        //print spaces

        for (int j = 1;j <= n-i; j++)
        {
            cout<<"   ";
        }

        for ( int j = 1; j <= i; j++)
        {
            cout<<" * ";
        }
        cout<<endl;
        
    }
    


} 