#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> lastSeen;
    int maxLen = 0, left = 0;
    for (int right = 0; right < s.length(); ++right) {
        if (lastSeen.count(s[right]))
            left = max(left, lastSeen[s[right]] + 1);
        lastSeen[s[right]] = right;
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}
