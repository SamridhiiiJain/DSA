#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int findPlatform(vector<int>& arr, vector<int>& dep) {
    int ans;
    int n = arr.size();
    sort(arr.begin(),arr.end());
    sort(dep.begin(),dep.end());
    int count=0,i=0,j=0;
    while(i<n)
    {
        if(arr[i]<=dep[j])
        {
            count++;
            ans=max(ans,count);
            i++;
        }
        else if(arr[i]>dep[j])
        {
            count--;
            j++;
        }
    }
    return ans;
}

int main(){
vector<int> arr={900, 940, 950, 1100, 1500, 1800};
vector <int> dep = {910, 1200, 1120, 1130, 1900, 2000};    
int ans=findPlatform(arr,dep);
cout<<ans;
}

