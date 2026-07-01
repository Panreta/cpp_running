#include <iostream>
#include <vector>
#include <string>

int main() {
    std::cout << "✅ Your C++ compiler is working!" << std::endl;

    // Simple math test
    int a = 5, b = 7;
    std::cout << "a + b = " << (a + b) << std::endl;

    // String test
    std::string name = "C++";
    std::cout << "Hello, " << name << "!" << std::endl;

    // Vector test
    std::vector<int> nums = {1, 2, 3, 4, 5};
    std::cout << "Vector size = " << nums.size() << std::endl;
    std::cout << "Elements: ";
    for (int n : nums) std::cout << n << " ";
    std::cout << std::endl;

    return 0;
}
