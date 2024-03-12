The algorithm used in this code is dynamic programming. It uses a 2D vector dp to store the number of unique paths to each cell in the grid. The base case is when i and j are both 0, in which case the number of unique paths is 1. If the current cell contains an obstacle (represented by '*' in the input), the number of unique paths is 0. Otherwise, the number of unique paths to the current cell is the sum of the number of unique paths to the cell above and the number of unique paths to the cell to the left, modulo 1000000007, written by dp[i][j[ = dp[i-1][j] + dp[i][j-1].

The uniquePathsWithObstacles function takes a vector of strings as input, where each string represents a row of the grid. It returns the number of unique paths from the top-left corner to the bottom-right corner of the grid that do not go through any obstacles.

The solve function reads the input grid, calls the uniquePathsWithObstacles function, and prints the result.

The source file contains the code and the makefile, with the instructions on how to run the code
The output file consists of all the testcases files used to check the code with their corresponding outputs.
