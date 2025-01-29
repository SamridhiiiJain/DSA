#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int merge(vector<int>& arr, int start, int mid, int end) {
        vector<int> temp;
        int i = start, j = mid + 1;
        int count = 0;

        while (i <= mid && j <= end) {
            if (arr[i] <= arr[j]) {
                temp.push_back(arr[i++]);
            } else {
                temp.push_back(arr[j++]);
                count += (mid - i + 1); 
            }
        }

        while (i <= mid) {
            temp.push_back(arr[i++]);
        }

        while (j <= end) {
            temp.push_back(arr[j++]);
        }

        for (int k = start; k <= end; ++k) {
            arr[k] = temp[k - start];
        }

        return count;
    }

    int mergeSort(vector<int>& arr, int left, int right) {
        if (left >= right) return 0;

        int mid = left + (right - left) / 2;
        int count = 0;

        count += mergeSort(arr, left, mid); 
        count += mergeSort(arr, mid + 1, right); 
        count += merge(arr, left, mid, right); 

        return count;
    }

    int inversionCount(vector<int>& arr) {
        return mergeSort(arr, 0, arr.size() - 1);
    }
int main()
{
    vector<int> arr={2,4,1,3,5};
    cout<< mergeSort(arr,0,arr.size()-1);
    return 0;
}