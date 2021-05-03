/** 122. Best Time to Buy and Sell Stock II */
/** You are given an array prices where prices[i] is the price of a given stock on the ith day.
 *  Find the maximum profit you can achieve. You may complete as many transactions as you like 
 *  (i.e., buy one and sell one share of the stock multiple times).
 * 
 *  Note: You may not engage in multiple transactions simultaneously 
 *  (i.e., you must sell the stock before you buy again).
 * 
 *  Example 1:
 *  Input: prices = [7,1,5,3,6,4]
 *  Output: 7
 *  Explanation: Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4.
 *  Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3.
 * 
 *  Example 2:
 *  Input: prices = [1,2,3,4,5]
 *  Output: 4
 *  Explanation: Buy on day 1 (price = 1) and sell on day 5 (price = 5), profit = 5-1 = 4.
 *  Note that you cannot buy on day 1, buy on day 2 and sell them later, 
 *  as you are engaging multiple transactions at the same time. You must sell before buying again.
 * 
 *  Example 3:
 *  Input: prices = [7,6,4,3,1]
 *  Output: 0
 *  Explanation: In this case, no transaction is done, i.e., max profit = 0.
 * 
 *  Constraints:
 *  1 <= prices.length <= 3 * 10^4
 *  0 <= prices[i] <= 10^4 **/

#include <vector>
#include <iostream>

using namespace std;

int maxProfit(vector<int> &prices) {
    int buy = -1;
    int profit = 0;

    for (int i = 0; i < prices.size()-1; ++i) {
        if (buy == -1 && prices[i] < prices[i+1]) {
            buy = i;
        } else if (buy != -1 && prices[i] > prices[i+1]) {
            profit += prices[i]-prices[buy];
            buy = -1;
        }
    }

    if (buy != -1) profit += prices.back() - prices[buy];

    return profit;
}

int main() {
    vector<int> prices0 {7,1,5,3,6,4};
    vector<int> prices1 {1,2,3,4,5};
    vector<int> prices2 {7,6,4,3,1};

    int ans0 = maxProfit(prices0);
    int ans1 = maxProfit(prices1);
    int ans2 = maxProfit(prices2);

    cout << ans0 << endl; // 7
    cout << ans1 << endl; // 4
    cout << ans2 << endl; // 0

    return 0;
}

