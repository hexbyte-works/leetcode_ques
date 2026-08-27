class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxdiff=0,minprice=prices[0];
        for(int i=0;i<prices.size();i++){
            if(prices[i]<minprice){
                minprice=prices[i];
            }
            if((prices[i]-minprice)>maxdiff){
                maxdiff=prices[i]-minprice;
            }
        }
        return maxdiff;
    }
};