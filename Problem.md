Minimum bit flips such that every K consecutive bits contain at least one set bit
Given a binary string S, and an integer K, the task is to find the minimum number of flips required such that every substring of length K contains at least one ‘1’.
-------------------------------------------------------------------------
Examples: 
Input: S = “10000001” K = 2 
Output: 3 
Explanation: 
We need only 3 changes in string S ( at position 2, 4 and 6 ) so that the string contain at least one ‘1’ in every sub-string of length 2.
Input: S = “000000” K = 3 
Output: 2 
Explanation: 
We need only 3 changes in string S ( at position 2 and 5 ) so that the string contain at least one ‘1’ in every sub-string of length 3.
Input: S = “111010111” K = 2 
Output: 0
