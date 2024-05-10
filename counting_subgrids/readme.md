Function countCornerBlackSubgrids:
                  1) This function takes a 2D vector grid by reference, representing the grid where 1 indicates a black cell and 0 indicates a white cell. n stores the 
                  size of the grid (assuming it's a square grid), and count is initialized to 0 to count the subgrids meeting the criteria.
                  2) These nested loops iterate through each cell in the grid. If a cell is black (grid[i][j] == 1), it checks all possible rectangles/subgrids starting 
                  from that cell (k = i + 1 and l = j + 1). If all four corners of a subgrid are black (i.e., grid[i][j], grid[k][j], grid[i][l], and grid[k][l] are 
                  all 1), count is incremented.
                  3) Finally, the function returns the count of subgrids with all black corners.

Main Function:
                  1) In the main function, it prompts the user to enter the size n of the square grid.
                  2) It then creates a 2D vector grid of size n x n and asks the user to input the elements of the grid, where 0 represents white cells and 1 represents 
                  black cells.
                  3) After taking input, it calls the countCornerBlackSubgrids function with the grid as an argument, calculates the number of subgrids with all black 
                  corners, and then prints this count.
