#include <cmath>
#include <iostream>

int main() {
  char key;
  double val = 0.;
  double g = 0., y = 0., h = 0.;

  std::cout << "Choose the metric to change a)grad --> rad / b)rad-->grad / "
               "c)H-->kg / d)kg-->H )\n";
  std::cin >> key >> val;

  switch (key) {
  case 'a':
  case 'A':
    std::cout << val * M_PI / 180;
    break;
  case 'b':
  case 'B':
    std::cout << val * 180 / M_PI;
    break;
  case 'c':
  case 'C':

    while (true) {

      std::cout << "Enter latitude and height above sea level: ";
      std::cin >> y >> h;
      if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        std::cout << "Oops, that input is invalid. Please try again.\n";

      } else {
        g = 9.780318 * (1 + 0.005302 * pow(sin(y), 2) -
                        0.000006 * pow(sin(2 * y), 2)) -
            0.000003086 * h;
        std::cout << val / g;
        break;
      }
    }
    break;

  case 'd':
  case 'D':
    while (true) {

      std::cout << "Enter latitude and height above sea level: ";
      std::cin >> y >> h;
      if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        std::cout << "Oops, that input is invalid. Please try again.\n";

      } else {
        g = 9.780318 * (1 + 0.005302 * pow(sin(y), 2) -
                        0.000006 * pow(sin(2 * y), 2)) -
            0.000003086 * h;
        std::cout << val * g;
        break;
      }
    }
    break;
  default:
    std::cout << "Oops, that input is invalid. Please try again.\n";
    break;
  }
  return 0;
}