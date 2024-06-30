#include <iostream>
#include "cmd.hpp"

int main() {
  Command* add = new Command([](double a, double b) {
    return a + b;
  });

  Command* subtract = new Command([](double a, double b) {
    return a - b;
  });

  Command* divide = new Command([](double a, double b) {
    return a / b;
  });

  Command* multiply = new Command([](double a, double b) {
    return a * b;
  });

  double addResult = add->Execute(10, 5);
  double subtractResult = subtract->Execute(10, 5);
  double divideResult = divide->Execute(10, 5);
  double multiplyResult = multiply->Execute(10, 5);

  std::cout << addResult << std::endl;
  std::cout << subtractResult << std::endl;
  std::cout << divideResult << std::endl;
  std::cout << multiplyResult << std::endl;
}