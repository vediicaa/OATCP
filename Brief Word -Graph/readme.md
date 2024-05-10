Function generateShortForms:
              1) This function takes a vector of strings words (the dictionary) as input and generates short forms for the words.
              2) It initializes an unordered map shortForms to store the short forms.
              3) It iterates over each word in the dictionary.
              4) For each word, it generates all possible subsequences of length 1 to 4 (inclusive) and checks if they already exist in shortForms.
              5) If a subsequence does not exist, it maps it to the corresponding word in the map.
              6) If a subsequence already exists but maps to a different word, it invalidates the subsequence by mapping it to an empty string.

Function Main:
               1) It prompts the user to enter the number of words in the dictionary (n) and then reads n words into the vector words.
               2) It calls the generateShortForms function to generate short forms for the words in the dictionary.
               3) It then prints the generated short forms (excluding invalid short forms) to the standard output.
