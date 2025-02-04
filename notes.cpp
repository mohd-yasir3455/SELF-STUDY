#include<iostream>

using namespace std;
int main(){

    int n = 1279;
int notes;
    switch (1)
    {
    case 1:   
    if (n/100>0)
    {
        notes = n/100;
    n = n - notes *100;
    cout <<notes<<" notes of 100 rupees"<<endl;
    }

     case 2 :
     if(n/50.0)  {
        notes = n/50;
    n = n - notes *50;
    cout <<notes<<" notes of 50 rupees"<<endl;
    }

    case 3 :
     if(n/20.0)  {
        notes = n/20;
    n = n - notes *20;
    cout <<notes<<" notes of 20 rupees"<<endl;
    }

      case 4 :
     if(n/1.0)  {
        notes = n/1;
    n = n - notes *1;
    cout <<notes<<" notes of 1 rupees"<<endl;
    }
    
    default:
        break;
    }
}