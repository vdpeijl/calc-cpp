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

  double add_result = calculator.add(10, 5);
  double subtract_result = calculator.sub(10, 5);
  double divide_result = calculator.div(10, 3);
  double multiply_result = calculator.mul(10, 5);

  std::cout << add_result << std::endl;
  std::cout << subtract_result << std::endl;
  std::cout << divide_result << std::endl;
  std::cout << multiply_result << std::endl;
}