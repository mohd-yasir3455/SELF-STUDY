#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    string n;
    cin >> n;  //23 2 3 23 are prime 

    //find all substring of n 
    for (int  i = 0; i < n.length(); i++)
    {
      for (int  j = i+1; j <= n.length(); j++)
      {
            string num = n.substr(i,j-i);
            int num1 = stoi(num);
            if(isPrime(num1))
            {
                cout<<num1<<endl;
            }
      }
      
    }
    
   
}
