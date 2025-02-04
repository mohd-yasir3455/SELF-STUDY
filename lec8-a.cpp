#include<iostream>

using namespace std;
int ap(int n ){
    return 3*n +7;
}

int main(){
int n , r;
    cout <<"enter the value of N"<<endl;
    cin>>n;
     

    int answer = ap(n);

    cout << answer <<" is sum of nth term ";
}