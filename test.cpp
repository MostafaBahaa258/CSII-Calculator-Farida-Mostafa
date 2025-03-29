#include <iostream>
#include "calculator.h"
using namespace std;

int main() {
    Calculator calc;
    cout << "6 + 3 = " << calc.add(6, 3) << endl;
    cout << "6 - 3 = " << calc.subtract(6, 3) << endl;
    cout << "6 * 3 = " << calc.multiply(6, 3) << endl;
    cout << "6 / 3 = " << calc.divide(6, 3) << endl;
    cout << "Factorial of 6 is " << calc.factorial(6) << endl;
    cout << "GCD of 6 and 3 is " << calc.gcd(6, 3) << endl;
    cout << "LCM of 6 and 3 is " << calc.lcm(6, 3) << endl;
    return 0;
}