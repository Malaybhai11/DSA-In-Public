// BestTimeToBuyAndSellStock.cpp
// Problem: Find maximum profit from one buy and one sell.

#include <bits/stdc++.h>
using namespace std;

/*
--------------------------------------------------
Approach 1: Brute Force
Time: O(n^2)
--------------------------------------------------
*/
int bestTimeApproach1(vector<int>& prices) {
    int n = prices.size();
    int maxProfit = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            maxProfit = max(maxProfit, prices[j] - prices[i]);
        }
    }

    return maxProfit;
}
