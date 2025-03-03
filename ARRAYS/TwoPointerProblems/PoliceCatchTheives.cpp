#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxThievesCaught(char arr[], int n, int k) {
    vector<int> police, thieves;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == 'P') 
            police.push_back(i);
        else if (arr[i] == 'T') 
            thieves.push_back(i);
    }

    int i = 0, j = 0, count = 0;

    while (i < police.size() && j < thieves.size()) {
        if (abs(police[i] - thieves[j]) <= k) {
            count++;
            i++;
            j++;
        } else if (police[i] < thieves[j]) {
            i++;
        } else {
            j++;
        }
    }

    return count;
}

int main() {
    char arr[] = {'P', 'T', 'T', 'P', 'T'};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 1;
    cout << "Maximum thieves caught: " << maxThievesCaught(arr, n, k) << endl;
    return 0;
}
