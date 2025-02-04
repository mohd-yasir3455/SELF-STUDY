#include<iostream>
#include <vector>
#include<set>
using namespace std;
void setmatrices(){
vector<vector<int>>matrices;
int row = matrices.size();
int col = matrices[0].size();
    set<int>row1;
    set<int>col1;
    for (int  i = 0; i < row; i++)
    {
      for (int j = 0; j< col; j++)
      {
       if (matrices[i][j]==0)
       {
       row1.insert(i)
       col1.insert(j);
       }
       
      }
      
    }
    for (int i = 0; i < row1.size(); i++)
    {
        int v = row1.begin();
        
        
    }
    
    
}

int main() {
  



return 0 ;
}