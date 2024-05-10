
1) Function removeKdigits

        a) This function takes a string num and an integer k as parameters.
        b) It uses a stack to remove k digits from num while maintaining the smallest possible number.
        c) It iterates through each digit in num and compares it with the top of the stack.
        d) If the digit is smaller than the top of the stack, it pops elements from the stack until the top is smaller than or equal to the current digit, 
        and k is decremented accordingly.
        e) After processing all digits, it removes any remaining k digits from the stack.
        f) It constructs the resulting string by popping elements from the stack and reversing the order to get the smallest number.
        g) It handles cases where the resulting number is zero or has leading zeros.

2) Function Main

        a) This function reads input for the string n and integer k from the user.
        b) It then calls the removeKdigits function with the provided inputs and prints the result.
