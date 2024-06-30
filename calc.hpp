#include "cmd.hpp"

class Calculator {
  private:
    Command* add_;
    Command* subtract_;
    Command* divide_;
    Command* multiply_;

  public:
    Calculator(Command* add, Command* subtract, Command* divide, Command* multiply);
    double Add(double a, double b);
    double Subtract(double a, double b);
    double Divide(double a, double b);
    double Multiply(double a, double b);
};