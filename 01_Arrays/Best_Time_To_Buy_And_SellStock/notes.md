# Best Time to Buy and Sell Stock

## Problem
You are given an array prices where prices[i] is the price of a stock on day i.

You may buy once and sell once.

Return the maximum profit.

Example:
Input: [7,1,5,3,6,4]
Output: 5
Explanation:
Buy at 1, sell at 6 → profit = 5

---

## Key Concepts

### 1. One Transaction Only
You must buy before you sell.

### 2. Brute Force Idea
Try every pair (i, j) where j > i.

### 3. Greedy Insight
Instead of checking all pairs:
Keep track of the minimum price seen so far.

At each day:
Profit = current price - minimum price so far

Update maximum profit.

---

## Why Greedy Works

We only need:
- Lowest buying price before today
- Best selling point today

Single pass is enough.

---

## Pattern Recognition

If question says:
- Buy once
- Sell once
- Maximum profit

Think:
Track minimum so far.