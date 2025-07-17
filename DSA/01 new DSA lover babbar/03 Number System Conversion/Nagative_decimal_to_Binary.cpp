#include <iostream>
#include <bitset>
#include <string>
using namespace std;

string decimalToBinary(int num, int bits = 8)
{
    if (num < 0)
    {
        num = (1 << bits) + num; // Two's complement for negative numbers
    }
    bitset<32> binary(num);                 // Use bitset for binary representation
    return binary.to_string().substr(32 - bits); // Extract the required bit size
}

int main()
{
    int decimalNumber = -12;
    int bitSize = 8; // Adjust bit size as needed
    string binaryRepresentation = decimalToBinary(decimalNumber, bitSize);
    cout << "\nBinary representation of " << decimalNumber
         << " in " << bitSize << "-bit: " << binaryRepresentation << endl;
    return 0;
}

// This code converts a negative decimal number to its binary representation using two's complement.
// It uses a bitset to handle the binary conversion and allows for specifying the bit size (default is 8 bits).
// The output will show the binary representation of the negative decimal number in the specified bit size.
// The time complexity of this code is O(1) for the conversion process, as it uses bitwise operations and a fixed-size bitset.
