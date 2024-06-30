#include "cmd.hpp"
#include "calc.hpp"

Calculator::Calculator(Command* add, Command* subtract, Command* divide, Command* multiply) {
  m_add = add;
  m_subtract = subtract;
  m_divide = divide;
  m_multiply = multiply;
}

double Calculator::add(double a, double b) {
  return m_add->execute(a, b);
}

double Calculator::sub(double a, double b) {
  return m_subtract->execute(a, b);
}

double Calculator::div(double a, double b) {
  return m_divide->execute(a, b);
}

double Calculator::mul(double a, double b) {
  return m_multiply->execute(a, b);
}