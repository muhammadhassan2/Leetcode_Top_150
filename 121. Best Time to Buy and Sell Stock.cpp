class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxx=prices[prices.size()-1];
        int ans=0;
        for(int i=prices.size()-1;i>=0;i--){
            if(prices[i]<maxx){
                ans=max(ans,maxx-prices[i]);
            }
            maxx=max(maxx,prices[i]);
        }
        
        return ans;
    }
};
