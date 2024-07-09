/*
Problem #4: Conditional Count
● Write a program that reads number X, then other 5 numbers. Print 2 values:
○ How many numbers <= X
○ How many numbers > X
○ Any relation between these 2 outputs?
● Inputs
○ 10 300 1 5 100 200
○ Output: 2 3
○ Explantation
○ 2 numbers (1, 5) are <= 10
○ 3 numbers (100, 200, 300) are > 10
*/
// How I think 

/*
numX , num1, num2, num3, num4, num5;

int countLowX = 0;
int countGreaterX = 0;

if(num1 <= numX){
  countLowX++;
}else{
  countGreaterX++;
}
and so on ... 

but what he di ...  is just compare what is the less than or equal to X then the relation between it is 5 - resultCount because we only have 5 number 

*/


#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int numX , num1, num2, num3, num4, num5;
    cin >>numX >> num1 >> num2 >> num3>>  num4>> num5;

    int count = 0;
    count +=  num1 <= numX;
    count +=  num2 <= numX;
    count +=  num3 <= numX;
    count +=  num4 <= numX;
    count +=  num5 <= numX;
    
    cout<< count << " " << 5  - count  ;

    return 0;
}

