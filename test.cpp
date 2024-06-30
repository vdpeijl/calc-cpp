#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "cmd.hpp"

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

TEST_CASE("Add command") {
  CHECK(add->execute(10, 5) == 15);
}

TEST_CASE("Subtract command") {
  CHECK(subtract->execute(10, 5) == 5);
}

TEST_CASE("Divide command") {
  CHECK(divide->execute(10, 5) == 2);
}

TEST_CASE("Multiply command") {
  CHECK(multiply->execute(10, 5) == 50);
}