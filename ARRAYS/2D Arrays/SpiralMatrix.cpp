#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
    
    
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int srow=0,scol=0,erow=m-1,ecol=n-1; 
        vector<int>ans;
        while(srow <= erow && scol <= ecol)
        {
           //top
           for(int j=scol;j<=ecol;j++)
           {
            ans.push_back(matrix[srow][j]);
           }
           //right
           for(int i=srow+1;i<=erow;i++)
           {
            ans.push_back(matrix[i][ecol]);
           }
           //buttom
           for(int k=ecol-1;k>=scol;k--)
           {
            if(srow==erow)
            {
                break;
            }
            ans.push_back(matrix[erow][k]);
           }
           //left
           for(int l=erow-1;l>=srow+1;l--)
           {
            if(scol==ecol)
            {
                break;
            }
            ans.push_back(matrix[l][scol]);
           }

           srow++; erow--; scol++; ecol--;

        }
        return ans;
    }

int main() {
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    vector<int> ans= spiralOrder(matrix); 
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";

    return 0;
}