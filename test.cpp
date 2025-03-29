#include <iostream>
#include "calculator.h"
using namespace std;

int main() {
    Calculator calc;
    cout << "6 + 3 = " << calc.add(6, 3) << endl;
    cout << "6 - 3 = " << calc.subtract(6, 3) << endl;
    return 0;
}