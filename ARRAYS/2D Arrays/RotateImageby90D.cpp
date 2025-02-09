#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
       int n =matrix.size();
       //Transpose of matrix
       for(int i=0;i<n-1;i++)
       {
         for(int j=i+1;j<n;j++)
         {
            swap(matrix[i][j],matrix[j][i]);
         }
       }
       //revrse each row
       for(int i=0;i<n;i++)
       {
        reverse(matrix[i].begin(), matrix[i].end());
       }
    }

    int main() {
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    rotate(matrix);
    return 0;
}