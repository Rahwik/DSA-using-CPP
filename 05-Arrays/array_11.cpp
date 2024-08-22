//Stock by and Sell
#include<iostream>
using namespace std;

// Function to calculate maximum profit by buying and selling stocks - Brute Force (O(n^2) approach)
int maxProfit(int price[], int start, int end)
{
    if(end <= start)
    {
        return 0;
    }
    int profit = 0;
    for(int i = start; i < end; i++)
    {
        for(int j = i + 1; j <= end; j++)
        {
            if(price[j] > price[i])
            {
                int curr_profit = price[j] - price[i] + maxProfit(price, start, i - 1) + maxProfit(price, j + 1, end);
                profit = max(profit, curr_profit);
            }
        }
    }
    return profit;
}

// Function to calculate maximum profit by buying and selling stocks - Optimized (O(n) approach)
int maxProfitOptimized(int price[], int n)
{
    int profit = 0;
    for(int i = 1; i < n; i++)
    {
        if(price[i] > price[i - 1])
        {
            profit += price[i] - price[i - 1];
        }
    }
    return profit;
}

int main() {
    // Example usage
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(prices[0]);

    cout << "Maximum Profit (Brute Force): " << maxProfit(prices, 0, n - 1) << endl;
    cout << "Maximum Profit (Optimized): " << maxProfitOptimized(prices, n) << endl;

    return 0;
}
