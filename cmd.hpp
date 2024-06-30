#include <functional>

class Command {
  private:
    std::function<double(double, double)> func;
  public:
    Command(std::function<double(double, double)> f) : func(f) {}

    double Execute(double a, double b) {
        return func(a, b);
    }
};
