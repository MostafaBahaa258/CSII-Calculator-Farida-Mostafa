#include "calculator.h" 

double Calculator::add(double a, double b){
    return a + b;
}
double Calculator::subtract(double a, double b){
    return a - b;
}
double Calculator::multiply(double a, double b){
    return a * b;
}
double Calculator::divide(double a, double b){
    if(b == 0) return 0;
    else return a / b;
}
int Calculator::factorial(int n) {
    if(n <= 1) return 1;
    else return n * factorial(n - 1);
}

int Calculator::gcd(int a, int b) {
    if(b == 0) return a;
    else return gcd(b, a % b);
}

int Calculator::lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
