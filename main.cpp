#include <iostream>
#include "cmd.hpp"
#include "calc.hpp"

int main() {
  Command* add = new Command([](const double a, const double b) {
    return a + b;
  });

  Command* subtract = new Command([](const double a, const double b) {
    return a - b;
  });

  Command* divide = new Command([](const double a, const double b) {
    return a / b;
  });

  Command* multiply = new Command([](const double a, const double b) {
    return a * b;
  });

  Calculator calculator(
    add,
    subtract,
    divide,
    multiply
  );

  double addResult = calculator.Add(10, 5);
  double subtractResult = calculator.Subtract(10, 5);
  double divideResult = calculator.Divide(10, 3);
  double multiplyResult = calculator.Multiply(10, 5);

  std::cout << addResult << std::endl;
  std::cout << subtractResult << std::endl;
  std::cout << divideResult << std::endl;
  std::cout << multiplyResult << std::endl;
}