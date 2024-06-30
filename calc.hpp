#include "cmd.hpp"

class Calculator {
  private:
    Command* m_add;
    Command* m_subtract;
    Command* m_divide;
    Command* m_multiply;

  public:
    Calculator(Command* add, Command* subtract, Command* divide, Command* multiply);
    double add(double a, double b);
    double sub(double a, double b);
    double div(double a, double b);
    double mul(double a, double b);
};