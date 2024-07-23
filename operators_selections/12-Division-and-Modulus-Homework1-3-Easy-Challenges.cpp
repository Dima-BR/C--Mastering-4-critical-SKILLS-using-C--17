/*
Problem #1: Averages
● Write a program that reads 5 numbers and print the following:
○ A) Their average
○ B) The sum of the first 3 numbers divided by the sum of the last 2 numbers
○ C) The average of the first 3 numbers divided by the average of the last 2 numbers.
○ What is the math relation between B and C?
● Input 1 2 3 4 5 ○3
○ 0.666666667 ○ 0.444444444

*/

#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3, num4, num5;

    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    // A) 
    double average = (num1 + num2 + num3 + num4 + num5) / 5.0;

    // B)
    double sumFirstThree = num1 + num2 + num3;
    double sumLastTwo = num4 + num5;
    double divisionSum = sumFirstThree / sumLastTwo;

    // C)
    double averageFirstThree = sumFirstThree / 3.0;
    double averageLastTwo = sumLastTwo / 2.0;
    double divisionAverage = averageFirstThree / averageLastTwo;

    // print results
    cout << average << endl;
    cout << divisionSum << endl;
    cout << divisionAverage << endl;

    return 0;
}


