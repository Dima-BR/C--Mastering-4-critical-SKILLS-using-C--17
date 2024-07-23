/*
Problem #1: Swapping 3 numbers!
● Write a code to swap 3 numbers
● Let say we have numbers a = 115, b = 20, c = 301
● We wanna their final values to be: a = 20, b = 301, c = 115
*/

//How I think about it ...
/*
num1     num2     num3     temp
115      20       301      -1
20       301      115      115

temp = num1 
num1 = num2 
num2 = num3
num3 = temp

*/

#include<iostream>
using namespace std;

int main() {
	int num1, num2, num3, temp = -1;

	// Circulate them instead of direct 2 swaps
	cin>>num1>>num2>>num3;
	temp = num1;
	num1 = num2;
	num2 = num3;
	num3 = temp;

	cout<<num1<<" "<<num2<<" "<<num3<<"\n";


	return 0;
}


