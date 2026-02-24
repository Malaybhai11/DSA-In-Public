# Maximum Subarray

## Pattern Used
Greedy + Running Sum (Kadane's Algorithm)

## Core Insight
If a running sum becomes negative,
it will never help future subarrays.
So reset it.

## Why Reset?
Negative prefix reduces future gain.
Better to start fresh.

## When To Use This Pattern
- Maximum subarray problems
- Continuous segment optimization
- Stock profit style problems

## Edge Cases
- All numbers negative
- Single element array
- Large input size