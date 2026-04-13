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


    g++ main.cpp && ./a.out; rm ./a.out

    g++ main.cpp && ./a.out < test-1.txt; rm ./a.out
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);

    // Driving is expensive! With your programming partner, write a program to
    // prompt a user for two doubles:
    // a car's mpg (miles per gallon) and the gas price per gallon as input,
    double mpg = 0.0;
    double USD_per_gallon;

    cout << "MPG: ";
    cin >> mpg;

    cout << "USD per Gallon: ";
    cin >> USD_per_gallon;

    // and output the gas cost for 20 miles, 75 miles, and 500 miles.
    double USD_per_20_miles = 0.0;
    double USD_per_75_miles = 0.0;
    double USD_per_500_miles = 0.0;

    // do calculations
    cout << "TODO: calculations!!" << endl;
    double USD_per_mile = 1 / mpg * USD_per_gallon; 

    USD_per_20_miles = USD_per_mile * 20 ;
    USD_per_75_miles = USD_per_mile * 75;
    USD_per_500_miles = USD_per_mile * 500;

    cout << setw(5) << right << "MILES" << setw(8) << right << "USD" << endl;

    cout << setw(5) << right << "20" << setw(8) << right << USD_per_20_miles << endl;
    cout << setw(5) << right << "75" << setw(8) << right << USD_per_75_miles << endl;
    cout << setw(5) << right << "500" << setw(8) << right << USD_per_500_miles << endl;

    return 0;
}