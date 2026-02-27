
/*
--------------------------------------------------
Approach 2: Greedy (Optimal)
Time: O(n)
--------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;


int bestTimeApproach2(vector<int>& prices) {
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int price : prices) {
        minPrice = min(minPrice, price);
        maxProfit = max(maxProfit, price - minPrice);
    }

    return maxProfit;
}

int main() {
    vector<int> prices = {7,1,5,3,6,4};

    cout << "Approach 1: " << bestTimeApproach1(prices) << endl;
    cout << "Approach 2: " << bestTimeApproach2(prices) << endl;

    return 0;
}