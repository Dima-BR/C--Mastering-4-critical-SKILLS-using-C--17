/*
Problem #3: Sum numbers from 1 to N
● Write a program that reads integer N and Print the sum from 1 to N
○ E.g. If input N = 5, then Output is: 15
○ Why? As 1+2+3+4+5 = 15
○ Below table of more values
○ 3 ⇒ 6 (1+2+3)
○ 4 ⇒ 10 (1+2+3+4)
○ 5 ⇒ 15 (1+2+3+4+5)
● You need to find a simple 1 line formula to solve the problem :)
○ Hint: Let N = 8. Write numbers from 1 to 8
○ What is the sum of 1st and 8th number? sum of 2nd and 7th? And so on
○ Your formula should be good for even and odd N. Be careful programmer!
○ What is the maximum N after it overflow occurs? Recall int max is 2147483647

*/

// How I think 
/*
N = 8 
  1 2 3 4 5 6 7 8

  1 + 8 = 9
  2 + 7 = 9
  3 + 6 = 9
  4 + 5 = 9

  3adad el azwaj >> N/2
  magmo3 el zoj >> N+1

  So the summation is >> N * (N + 1) / 2


*/

#include<iostream>
using namespace std;

int main() {
	int n;

	cin >> n;

	cout<< n * (n+1) / 2;

	return 0;
}

// And for the overflow issue we should use long 
/*

ملاحظة حول التجاوز (Overflow):
الحد الأقصى لقيمة int في C++ هو 2147483647. باستخدام الصيغة، يجب أن نكون حذرين لتجنب التجاوز.
في الشيفرة أعلاه، استخدمنا long long لضمان أن الحسابات لا تتجاوز الحد الأقصى لقيمة int.

*/

/*
long long sum = (long long)N * (N + 1) / 2;

    cout << sum << endl;
*/



