#include <iostream>
#include <unordered_map>
#include <string>

void countCharacterOccurrences(const std::string& str) {
    // Create an unordered_map to store character frequencies
    std::unordered_map<char, int> frequencyMap;
    
    // Iterate over each character in the string
    for (char ch : str) {
        // Increment the count for this character in the map
        frequencyMap[ch]++;
    }
    
    // Print the frequencies
    std::cout << "Character frequencies in the string:" << std::endl;
    for (const auto& pair : frequencyMap) {
        std::cout << "'" << pair.first << "' : " << pair.second << std::endl;
    }
}

int main() {
    std::string str = "example string with characters";
    
    // Call the function to count character occurrences
    countCharacterOccurrences(str);
    
    return 0;
}
