
Function maxProduct:

              1) This function takes a reference to a vector of integers nums as input.
              2) It checks if the vector nums is empty. If so, it returns 0.
              3) It initializes three variables max_product, min_product, and result to the first element of nums.
              4) It then iterates through the elements of nums starting from the second element (i = 1).
                            If the current element nums[i] is negative, it swaps max_product and min_product. 
              6) It updates max_product and min_product by comparing the current element with the product of the current element and the previous maximum or minimum product, respectively.
              7) It updates result to store the maximum of result and max_product.
              8) Finally, it returns result, which holds the maximum product of a subarray within nums.

Main Function:

              1) It takes input for the size of the array (n) and the elements of the array (nums).
              2) It calls the maxProduct function to calculate the maximum product of a subarray within nums.
              3) It then prints the result max_prod to the standard output.
