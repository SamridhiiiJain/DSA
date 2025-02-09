#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 vector<vector <int>>setZeroes(vector<vector<int>>& matrix){
     int n= matrix.size();
    int m= matrix[0].size();
    vector<int> col(m, 0);
    vector<int> row(n, 0);
    for(int i=0;i<n;i++)
     {
         for(int j=0;j<m;j++)
         {
             if(matrix[i][j]==0)
             {
                 row[i]=1;
                 col[j]=1;
             }
         }
     }
    for(int i=0;i<n;i++)
     {
         for( int j=0;j<m;j++)
         {
             if(row[i] ==1 || col[j] ==1)
             {
                 matrix[i][j]=0;
             }
         }
     }
     return matrix;
 } 
  

    int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 0, 7, 8},
        {9, 8, 7, 0}
    };

     vector<vector<int>> ans= setZeroes(matrix);
     for(int i=0;i<ans.size();i++)
     {
         for( int j=0;j<ans[0].size();j++)
         {
            cout<<ans[i][j]<<" ";
         }
         cout<<endl;
     }
    return 0;
}