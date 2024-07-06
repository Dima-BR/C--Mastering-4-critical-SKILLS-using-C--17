/*
Problem #2: Sort 3 numbers
● Given 3 integers, sort (order) them in ascending order and print them.
● Inputs ⇒ outputs
○ 1 23 ⇒ 123
○ 1 32 ⇒ 123
○ 2 13 ⇒ 123
○ 2 31 ⇒ 123
○ 3 12 ⇒ 123
○ 3 21 ⇒ 123
● Do you notice there are only 6 ways to permutate 3 numbers!
*/


#include<iostream>
using namespace std;
 
int main() {
	int num1, num2, num3;
	
	cin>> num1 >>num2 >> num3;
 
	if (num1 < num2 && num1 < num3){
	    if (num2 < num3){
	        cout << num1 << num2 <<num3;
	    }else{
	        cout << num1 << num3 <<num2;
	    }
	}
	else if (num2 < num1 && num2 < num3){
	    if (num1 < num3){
	        cout << num2 << num1 <<num3;
	    }else{
	        cout << num2 << num3 <<num1;
	    }
	}
	else if (num3 < num1 && num3 < num2){
	    if (num1 < num2){
	        cout << num3 << num1 <<num2;
	    }else{
	        cout << num3 << num2 <<num1;
	    }
	}
 
	return 0;
}
