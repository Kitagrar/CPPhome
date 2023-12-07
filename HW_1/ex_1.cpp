#include <iomanip>
#include <iostream>

int main() {

  std::string name;
  int price;
  bool cash;
  int temp;

  std::cout << "Product's name: ";
  std::cin >> name;

  while (true) {

    std::cout << "Product's price: ";
    std::cin >> price;
    if (std::cin.fail()) {
      std::cin.clear();
      std::cin.ignore(32767, '\n');
      std::cout << "Oops, that input is invalid. Please try again.\n";

    } else {
      break;
    }
  }

  while (true) {
    std::cout << "Is cash-back available for this product? (true/false) ";
    std::cin >> std::boolalpha >> cash;
    if (std::cin.fail()) {
      std::cin.clear();
      std::cin.ignore(32767, '\n');
      std::cout << "Oops, that input is invalid. Please try again.\n";
    } else {
      break;
    }
  }

  while (true) {

    std::cout << "Maximum storing temperature: ";
    std::cin >> temp;
    if (std::cin.fail()) {
      std::cin.clear();
      std::cin.ignore(32767, '\n');
    } else {
      break;
    }
  }
  std::cout << name << '\n';
  std::cout << "Price:...........";
  std::cout.fill('0');
  std::cout.width(8);
  std::cout << std::uppercase << std::hex << price << '\n';
  std::cout << "Has cash-back:......." << std::boolalpha << cash << '\n';
  std::cout << "Max temperature:......" << std::showpos << std::dec << temp
            << '\n';

  return 0;
}