#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int countSmallEqual(vector<vector<int>> &mat, int mid) {
    int n = mat.size(), m = mat[0].size();
    int count = 0;

    // Count elements <= mid using binary search in each row
    for (int i = 0; i < n; i++) {
        count += upper_bound(mat[i].begin(), mat[i].end(), mid) - mat[i].begin();
    }
    return count;
}

int median(vector<vector<int>> &mat) {
    int n = mat.size(), m = mat[0].size();
    int low = INT_MAX, high = INT_MIN;

    // Finding min and max elements in the matrix
    for (int i = 0; i < n; i++) {
        low = min(low, mat[i][0]);
        high = max(high, mat[i][m - 1]);
    }

    int req = (n * m) / 2; // Required count for median
    while (low <= high) {
        int mid = low + (high - low) / 2;
        int smallEqual = countSmallEqual(mat, mid);

        if (smallEqual <= req) // Move right if count is too small
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}
int main() {
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int medianValue = median(matrix); 
    cout << "Median element value: " << medianValue << endl;

    return 0;
}