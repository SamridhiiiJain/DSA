#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) 
        return false;

        int rowsize=matrix.size(), colsize=matrix[0].size();
         int r=0, c=colsize-1;
         while(r < rowsize && c >= 0)
         {
            if(target==matrix[r][c])
            {
                return true;
            }
            else if(target< matrix[r][c])
            {
                c--;
            }
            else
            {
                r++;
            }
          
         }
          return false;
    }

int main()
{
  vector<vector<int>> matrix={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
  int target=34;
  cout<<searchMatrix(matrix,target);
}