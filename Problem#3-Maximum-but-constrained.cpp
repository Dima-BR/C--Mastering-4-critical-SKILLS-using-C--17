/*
Problem #3: Maximum but constrained
● Given 3 integers, you have to find the biggest one of them which is < 100. ○ Print -1 if no such number
● Inputs
○ 22 90 115 ⇒ 90
■ Here [20 90] are only < 100. Maximum (20, 90) = 90
○ 200 300 400 ⇒ -1
■ All of them are > 100, so no answer
○ 50 100 150 ⇒ 50
■ Only 50 is < 100.
○ 10 30 20 ⇒ 30
■ The 3 numbers < 100, so their max is 30

*/
#include<iostream>
using namespace std;
 
int main() {
	int num1, num2, num3;
	int res = -2147483647 - 1;
	
	cin>> num1 >>num2 >> num3;
	
	if(num1 < 100 && num1 > res){
	    res = num1;
	}
	if(num2 < 100 && num2 > res){
	    res = num2;
	}
	if(num3 < 100 && num3 > res){
	    res = num3;
	}
	
	cout << res;

 
	return 0;
}
