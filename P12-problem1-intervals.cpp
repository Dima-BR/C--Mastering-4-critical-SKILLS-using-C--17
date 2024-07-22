#include <iostream>
using namespace std;

int main() {
    int x,num1, num2, num3, num4, num5, num6, count;
    cin >> x>> num1>> num2>> num3>> num4>> num5>> num6;
    
    count = 0;
    
    if(x <= num1 || x <= num2){
        count +=1;
    } 
    if(x <= num3 || x >= num4){
        count +=1;
    }
    if(x <= num5 || x >= num6){
         count +=1;
    }
    
    cout<< count;
    
}
