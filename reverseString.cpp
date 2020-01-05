/*
 * Reverse String
 * By Sam Firnhaber
 */

#include <iostream>

int main() {
    std::string input, reverse;
    std::cin >> input;
    for (int i = input.length() - 1; i >= 0; i--)
        reverse += input[i];
    std::cout << reverse << std::endl;
}
