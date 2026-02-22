# Two Sum

## Pattern Used
Hashing for constant-time lookup.

## Core Idea
Instead of checking all pairs (O(n²)),
store previously seen numbers in a hash map.

For each number:
- Compute complement = target - current number
- Check if complement already exists

## Why This Works
We trade space for time.
Lookup in unordered_map is O(1) on average.

## When To Use This Pattern
- Need fast existence checks
- Complement problems
- Pair sum type questions
- Duplicate detection problems

## Edge Cases
- Negative numbers
- Duplicate elements
- Large input size