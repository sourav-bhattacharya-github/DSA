// not complect

// Convert binarray to  dasimal

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << " Enter a integer number
     : ";

    int n;
    cin >> n;
    int result = 0, i = 0;

    int un = -n;
    cout << un << endl;

    un = ~un;
    cout << un << endl;
    un = un + 1;
    cout << "the 2's compimant" << un;
    // while (un != 0)
    // {
    //     int bit = un & 1;
    //     result = bit * pow(10, i) + result;

    //     un >>= 1;
    //     i++;
    // }

    cout << " The Binary " << result << endl;
    return 0;
}


Copy the code
#include <iostream>
#include <bitset>
#include <string>

std::string decimalToBinary(int num, int bits = 8) {
    if (num < 0) {
        num = (1 << bits) + num; // Two's complement for negative numbers
    }
    std::bitset<32> binary(num); // Use bitset for binary representation
    return binary.to_string().substr(32 - bits); // Extract the required bit size
}

int main() {
    int decimalNumber = -10;
    int bitSize = 8; // Adjust bit size as needed
    std::string binaryRepresentation = decimalToBinary(decimalNumber, bitSize);
    std::cout << "Binary representation of " << decimalNumber 
              << " in " << bitSize << "-bit: " << binaryRepresentation << std::endl;
    return 0;
}
