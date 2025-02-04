/**
* a function to solve
* @prices: array of the prices per day
* @pricesSize: size of the array
*/
int maxProfit(int* prices, int pricesSize)
{
    int left = 0, right = 1, maxprofit = 0, profit;

    if (pricesSize == 0)
    {
        return 0;
    }
    while (right < pricesSize)
    {
        if (prices[left] < prices[right])
        {
            profit = prices[right] - prices[left];
            if (profit > maxprofit)
                maxprofit = profit;
        }
        else
            left = right;
        right++;
    }
    return (maxprofit);
}
