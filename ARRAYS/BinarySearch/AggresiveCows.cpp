  bool isPossible(vector<int> &stalls, int k,int n, int minAllowedDist)
  {
      int cows=1, lastStallPos= stalls[0];
      
      for(int i=1;i<n;i++)
      {
          if(stalls[i]-lastStallPos >=minAllowedDist)
          {
              cows++;
              lastStallPos=stalls[i];
          }
          if(cows==k)
          {
              return true;
          }
      }
      return false;
  }
  
    int aggressiveCows(vector<int> &stalls, int k) {
        int n=stalls.size();
        sort(stalls.begin(),stalls.end());
        int start=1,end=stalls[n-1]-stalls[0],ans=0,mid;
        
        while(start<=end)
        {
            mid=start+(end-start)/2;
            
            if(isPossible(stalls,k,n,mid))
            {
                ans=mid;
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
      return ans;  
    }