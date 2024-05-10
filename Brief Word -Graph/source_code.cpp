
#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

std::unordered_map<std::string, std::string> generateShortForms(const std::vector<std::string>& words) {
    std::unordered_map<std::string, std::string> shortForms;
    for (const std::string& word : words) {
        for (size_t i = 0; i < word.size(); ++i) {
            for (size_t j = i + 1; j <= std::min(i + 4, word.size()); ++j) {
                std::string subsequence = word.substr(i, j - i);
                if (shortForms.find(subsequence) == shortForms.end()) {
                    shortForms[subsequence] = word;
                } else {
                    // If the subsequence already exists, check if it's the same word
                    if (shortForms[subsequence] != word) {
                        // If not, invalidate the subsequence by mapping it to an empty string
                        shortForms[subsequence] = "";
                    }
                }
            }
        }
    }
    return shortForms;
}

int main() {
    int n;
    std::cout << "Enter the number of words in the dictionary: ";
    std::cin >> n;
    std::vector<std::string> words(n);
    std::cout << "Enter the words in the dictionary:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> words[i];
    }

    auto shortForms = generateShortForms(words);
    std::cout << "Generated Short Forms:" << std::endl;
    for (const auto& pair : shortForms) {
        if (!pair.second.empty()) {
            std::cout << pair.first << " -> " << pair.second << std::endl;
        }
    }
    return 0;
}
