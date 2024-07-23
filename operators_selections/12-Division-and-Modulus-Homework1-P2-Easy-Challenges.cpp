/*
Problem #2: Fractional Part
● Write a program that reads 2 numbers a, b and divides them (a/b), but prints only the fraction part
● Input: 201 25
● Output: 0.04
○ Notice: 201 / 25 = 8.04
○ We only want the fraction part: 0.04
*/

#include <iostream>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;

    double result = a / b;
    int integerPart = result; // This will implicitly convert the floating-point number to an integer, truncating the decimal part.
    double fractionPart = result - integerPart;

    cout << fractionPart << endl;

    return 0;
}
