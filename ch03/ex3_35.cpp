#include <iostream>
#include <iterator>
#include <vector>

int main() 
{
    int arr1[] = {0, 1, 2, 3, 4, 5};
    int arr2[] = {0, 1, 2, 3, 4};
    bool result = true;
    
    auto it1 = std::begin(arr1), it2 = std::begin(arr2);
    for ( ; it1 != std::end(arr1) && it2 != std::end(arr2); it1++, it2++) {
        if (*it1 != *it2) {
            result = false;
            break;
        }
    }
    
    result = result && it1 == std::end(arr1) && it2 == std::end(arr2);
    
    std::cout << result << std::endl;
    
    return 0;
}
