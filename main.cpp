/*
Driving Costs

Driving is expensive! With your programming partner, write a program to prompt a user for two doubles: a car's mpg (miles per gallon) and the gas price per gallon as input, and output the gas cost for 20 miles, 75 miles, and 500 miles.

Output each floating-point value with two digits after the decimal point, which can be achieved by executing
cout << fixed << setprecision(2); once before all other cout statements.

setprecision requires including the iomanip header like this:

#include <iomanip>

Documentation: https://en.cppreference.com/w/cpp/header/iomanip.html

*/

/*
    Commands:
    g++ main.cpp
    ./a.out
    rm a.out
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    return 0;
}