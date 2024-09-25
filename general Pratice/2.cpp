#include <iostream>
#include <string>

int findMaxDifference(const std::string& binaryString) {
    int maxDifference = -1;
    int countZeros = 0;
    int countOnes = 0;

    for (char c : binaryString) {
        if (c == '0') {
            countZeros++;
        } else {
            countOnes++;
        }

        int difference = countZeros - countOnes;
        if (difference > maxDifference) {
            maxDifference = difference;
        }
    }

    return maxDifference;
}

int main() {
    std::string binaryString;
    std::cout << "Enter a binary string: ";
    std::cin >> binaryString;

    int maxDifference = findMaxDifference(binaryString);
    std::cout << "Maximum difference: " << maxDifference << std::endl;

    return 0;
}