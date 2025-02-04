#include<iostream>

using namespace std;
int ncr(int n , int r ){
    int sum=1 ,sum1 =1 ;
    for (int i = 1; i <=r; i++)
    {
        sum = sum*n;
        n--;
        sum1 = sum1*i;
    }
    int s = sum/sum1;
    return s;
}

int main(){
int n , r;
    cout <<"enter the value of N"<<endl;
    cin>>n;
     cout <<"enter the value of R"<<endl;
    cin>>r;

    int answer = ncr(n,r);

    cout << answer <<" is ncr ";
}