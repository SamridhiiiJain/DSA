#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int bestbuy=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]>bestbuy){
            maxprofit=max(maxprofit,prices[i]-bestbuy);
            }
            bestbuy=min(bestbuy,prices[i]);
        }
        return maxprofit;
    }

int main()
{
    vector<int>num={7,1,5,3,6,4};
    int ans=maxProfit(num);
    cout<<ans;
    return 0;
}