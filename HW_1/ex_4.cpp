#include <iostream>

int main() {

  int x = 0, y = 0;
  while (true) {

    std::cout << "Print x, y: ";
    std::cin >> x >> y;
    if (std::cin.fail()) {
      std::cin.clear();
      std::cin.ignore(32767, '\n');
      std::cout << "Oops, that input is invalid. Please try again.\n";

    } else {
      break;
    }
  }

  x = x + y;
  y = x - y;
  x = x - y;

  std::cout << x << " " << y;
  return 0;
}