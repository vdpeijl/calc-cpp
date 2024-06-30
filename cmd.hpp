#pragma once
#include <functional>

class Command {
  private:
    std::function<double(double, double)> m_func;
  public:
    Command(std::function<double(double, double)> f) : m_func(f) {}

    double execute(double a, double b = 1) {
        return m_func(a, b);
    }
};
