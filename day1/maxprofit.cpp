public:
class solution{
    int maxprofit(vactor<int>&prices)
    int profit=0;
    int mini=prices[0];

    for(int i=1;i<prices.size();i++){
        profit=max(profit,prices[i]-mini);
        mini=min(prices[i],mini)

    }
    return profit;
}