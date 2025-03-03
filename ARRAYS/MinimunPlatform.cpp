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
        }
        else if(arr[i]>dep[j])
        {
            count--;
            j++;
        }
    }
    return ans;
}