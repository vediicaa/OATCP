The function totalHammingDistance takes a reference to a vector of integers nums as its parameter and returns an integer representing the total Hamming distance.
      1) Initializes the variable hammingdistance to store the total Hamming distance.
      2) The outer loop for iterates through each bit position from 0 to 31 (inclusive), assuming integers are represented using 32 bits.
      3) Inside the outer loop:
                a) int setbits=0 : Initializes the variable setbits to count the number of set bits (bits with value 1) at the current bitpos.
                b) The inner loop for iterates through each integer in the vector nums.
                c) (nums[i]>>bitpos)&1: Shifts the bitpos-th bit of the integer nums[i] to the rightmost position (>> bitpos) and then performs a bitwise 
                 AND operation with 1 (& 1). This operation extracts the value of the bitpos-th bit (either 0 or 1) from nums[i].
                d) setbits+=(nums[i]>>bitpos)&1;: Updates the setbits count by adding 1 if the bitpos-th bit of nums[i] is set (equals 1).
      4) After the inner loop, setbits now contains the count of set bits at the current bitpos for all integers in nums.
      5) hammingdistance+=setbits * (nums.size()-setbits);: Calculates the contribution to the total Hamming distance at the current bitpos and adds it to 
        hammingdistance. The contribution is given by the product of the count of set bits (setbits) and the count of unset bits (nums.size()-setbits) for all 
        integers in nums.
      6) The outer loop continues until all 32 bit positions are processed.
      7) Finally, the function returns hammingdistance, which represents the total Hamming distance for all pairs of integers in nums.

Main Function:
        1) The main function reads an integer n from the user, indicating the number of integers in the vector.
        2) It then reads n integers one by one and appends them to the vector v.
        3) After reading all integers, it calls the totalHammingDistance function with vector v as an argument and stores the result in ans.
        4) Finally, it prints the value of ans.
