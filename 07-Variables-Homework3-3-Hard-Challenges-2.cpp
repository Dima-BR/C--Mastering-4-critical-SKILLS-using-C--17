/*
Problem #2: Print Me
● Write a program that reads 2 integers A, B
○ B is either -1 or 1
■ If -1, print 2*A+1
■ If 1, print A*A
● Hint
○ You need to think in a simple 1 line formula for the output

*/

// How I think 
/*
we need to write a formula 
el mo3adaleah men 2 part el part el momt7ageg lazem nsafro SO bedna megdar Jabri ytsafar lama ykon 1 or -1 el B 

lama el B = 1 
(B + 1) / 2

lama el B = -1
(1 - B)/2

*/

#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    
    // Calculate the result based on the value of B
    int result = ((B + 1) / 2) * (A * A) + ((1 - B) / 2) * (2 * A + 1);
    
    // Print the result
    cout << result << endl;

    return 0;
}
