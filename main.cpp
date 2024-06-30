#include <iostream>
#include "cmd.hpp"

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

  double add_result = add->execute(10, 5);
  double subtract_result = subtract->execute(10, 5);
  double divide_result = divide->execute(10, 3);
  double multiplyResult = multiply->execute(10, 5);

  std::cout << add_result << std::endl;
  std::cout << subtract_result << std::endl;
  std::cout << divide_result << std::endl;
  std::cout << multiplyResult << std::endl;
}