#include <cmath>
#include <iostream>

int main() {
  int a = 0, b = 0, c = 0;
  int dis = 0;

  while (true) {

    std::cout << "Print a, b, c: ";
    std::cin >> a >> b >> c;
    if (std::cin.fail()) {
      std::cin.clear();
      std::cin.ignore(32767, '\n');
      std::cout << "Oops, that input is invalid. Please try again.\n";

    } else {
      break;
    }
  }

  dis = b * b - 4 * c * a;

  if (a == 0) {
    std::cout << -double(c) / b;
  }

  else if (dis > 0) {
    std::cout << (-double(b) + sqrt(dis)) / 2 * a << " "
              << (-double(b) - sqrt(dis)) / 2 * a;
  } else if (dis == 0) {
    std::cout << -double(b) / 2 * a;
  } else {
    std::cout << "Корней нет";
  }
  return 0;
}
