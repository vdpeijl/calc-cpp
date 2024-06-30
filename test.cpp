#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "calc.hpp"
#include "cmd.hpp"

TEST_CASE("Calculator methods") {
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

  CHECK(calculator.add(10, 5) == 15);
  CHECK(calculator.sub(10, 5) == 5);
  CHECK(calculator.div(10, 2) == 5);
  CHECK(calculator.mul(10, 5) == 50);
}