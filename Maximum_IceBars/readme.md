
The code solves the problem where a certain number of coins and a list of ice cream costs are given, and we want to determine how many ice creams can be bought 
with the given coins. 

1) Function maxIceCream:

    a) This function takes two arguments: vector of integers costs representing the costs of ice creams, and an integer coins representing the number of coins available.
    b) It initializes a variable count to 0 to keep track of the number of ice creams bought.
    c) It sorts the costs vector in ascending order using sort(costs.begin(), costs.end());.
    d) It then iterates through the sorted costs:
        If the current ice cream's cost is less than or equal to the remaining coins (coins), it subtracts the cost from coins and increments count.
        If the cost exceeds the remaining coins, it breaks the loop since no more ice creams can be bought with the remaining coins.
    e) Finally, it returns the count of bought ice creams.

2) Function main:

    a) It begins by prompting the user to enter the number of coins (N) available and reads this value into the variable N.
    b) It creates an empty vector v to store the ice cream costs.
    c) It then prompts the user to enter the costs of ice creams and populates the vector v with these costs.
    d) It prompts the user to enter the number of ice creams they want to buy (p) and reads this value into the variable p.
    e) It calls the maxIceCream function with the vector v and p as arguments and prints the result, which represents the maximum number of ice creams that can be 
    bought with the given coins.
