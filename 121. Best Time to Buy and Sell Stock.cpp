class Solution {
public:
    int maxProfit(vector<int>& prices) {//find i  && i+1 - i !<0
        if(prices.size()==0)
            return 0;
        int max=0;int buy_size=prices[0];int ans;
        for(int i=1;i<prices.size();i++){
            
            ans=prices[i]-buy_size;
            if(ans>0){
                if(ans>max)max=ans;
            }
            else
                buy_size=prices[i];
            
        }
        return max;
    }
};