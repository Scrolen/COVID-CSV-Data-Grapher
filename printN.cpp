// Zacharea Kaawan (251008043), printN implementation file, 2020-10-06

#include <iostream>
#include <string>
#include "printN.h"

using namespace std;

// printN, prints out a specified character n times, c is the character to be printed, n is the number of times to be printed,
// there is no return value.
void printN(char c, int n){
    cout << string(n, c) << endl;
}
