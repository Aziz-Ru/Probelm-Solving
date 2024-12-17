#include <iostream>
#include <map>

int main() {
    // Create a multimap
    std::multimap<int, std::string> myMultimap;

    // Insert some key-value pairs
    myMultimap.insert({1, "apple"});
    myMultimap.insert({1, "banana"});
    myMultimap.insert({2, "orange"});
    myMultimap.insert({3, "grape"});

    // Key-value to remove
    int keyToRemove = 1;
    std::string valueToRemove = "banana";

    // Find the range of elements with the given key
    auto range = myMultimap.equal_range(keyToRemove);
    for (auto it = range.first; it != range.second; ++it) {
        if (it->second == valueToRemove) {
            myMultimap.erase(it);  // Erase the specific key-value pair
            break;  // Remove only the first matching pair
        }
    }

    // Display the remaining elements
    for (const auto& pair : myMultimap) {
        std::cout << pair.first << " => " << pair.second << std::endl;
    }

    return 0;
}
