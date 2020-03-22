// Write a program that reverses the digits of the a number 


#include <iostream> 
#include <cmath> 

using namespace std;
long reverseDigits(int ); 

int main() {
    int x; 
    int y;
    cout << "Enter an integer: ";
    cin >> x;
    y = reverseDigits(x);
    cout << y << endl;
    return 0;
}

long reverseDigits(int x ) { 
    long count = 0;
    long y = x ;
    long  reversedNum = 0;
    long  getDigit = 0;

    while (y != 0) {
        y /= 10;
        if (y == 0) // keep from including zero in the count;
        break;
        count++;
    }
    
    for (long i = count ; i >= 0 ; i--) {
        y = x; 
        cout << i << endl;
        for( long  j = 1 ; j <= count - i; j++ ) {
            y /= 10;
        }
        cout << y << " "; 
        getDigit = y % 10;
        cout << getDigit << " ";
        cout << getDigit * pow(10,i) << " ";
        cout << reversedNum << endl;
        reversedNum += getDigit * pow(10,i);
        cout << reversedNum << endl;
    }
return reversedNum;
}