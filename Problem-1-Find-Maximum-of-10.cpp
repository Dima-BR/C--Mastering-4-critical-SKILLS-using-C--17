/*
Problem #1: Find Maximum of 10
● Read 10 integers, find which of them has the biggest value and print it.
● Inputs
○ 1 67 -9 88 -45 129 90 65 77 34⇒129

● Restriction: In your whole code there should be 2 integer variables defined
ONLY
○ If it is hard constraint; code it in whatever way
*/


// How he think :)

// cin num, if(result < num ) result = num >>> repeat  this 9 times (because the first num is by default is number)

#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int result , num;
    cin >> result;
    
    cin >> num; if(result < num) result = num;
    cin >> num; if(result < num) result = num;
    cin >> num; if(result < num) result = num;
    cin >> num; if(result < num) result = num;
    cin >> num; if(result < num) result = num;
    cin >> num; if(result < num) result = num;
    cin >> num; if(result < num) result = num;
    cin >> num; if(result < num) result = num;
    cin >> num; if(result < num) result = num;
    
    cout<< result;

    return 0;
}

  
