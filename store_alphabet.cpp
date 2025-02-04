#include<iostream>
#include<string.h>
using namespace std;

int main() {
  string abc = "eeabloid";
  int arr[26];

  for(int ch ='a'; ch<='z';ch++){
    abc[ch-'a']=ch;
  }

  for (int i = 0; i <= 26; i++)
  {
    cout<<abc[i]<<" ";
  }
  



return 0 ;
}