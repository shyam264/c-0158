#include <iostream>
#include <algorithm>  // For std::count
#include <vector>     // For std::vector

int main() {
    // Define the array (or use a vector)
    std::vector<int> array = {1, 2, 3, 2, 1, 2, 4};
    int value = 2;
    
    // Count occurrences of 'value'
    int count = std::count(array.begin(), array.end(), value);
    
    // Output the result
    std::cout << "The value " << value << " occurs " << count << " times in the array." << std::endl;
    
    return 0;
}
