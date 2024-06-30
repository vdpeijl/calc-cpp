#include "cmd.hpp"
#include "calc.hpp"

Calculator::Calculator(Command* add, Command* subtract, Command* divide, Command* multiply) {
  add_ = add;
  subtract_ = subtract;
  divide_ = divide;
  multiply_ = multiply;
}

double Calculator::Add(double a, double b) {
  return add_->Execute(a, b);
}

double Calculator::Subtract(double a, double b) {
  return subtract_->Execute(a, b);
}

double Calculator::Divide(double a, double b) {
  return divide_->Execute(a, b);
}

double Calculator::Multiply(double a, double b) {
  return multiply_->Execute(a, b);
}