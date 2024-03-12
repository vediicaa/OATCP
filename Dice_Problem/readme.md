The algorithm used in this code is dynamic programming. It uses an array DP to store the number of ways to reach each number from 0 to n. The base case is when left is 0, in which case the number of ways is 1.

The compute function takes an integer left as input and returns the number of ways to reach left by throwing a dice. If the number of ways to reach left has already been computed, it returns that value. Otherwise, it computes the number of ways by iterating through all possible numbers that can be obtained by throwing the dice (1 to 6) and recursively computing the number of ways to reach left - i. The final result is the sum of the number of ways to reach left - i for all possible values of i from 1 to 6, modulo 1000000007.

The main function reads the input number n, initializes the DP array, computes the number of ways to reach n by calling the compute function, and prints the result.

The time complexity of this algorithm is O(n), where n is the input number. The space complexity is also O(n), due to the use of the DP array.
