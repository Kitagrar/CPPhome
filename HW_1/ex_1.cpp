#include <iostream>
#include <iomanip>

int main() {

  std::string name;
  int price;
  bool cash;
  int temp;

  std::cout << "Product's name:";
  std::cin >> name;

  std::cout << "Product's price:";
  std::cin >> price;

  std::cout << "Is cash-back available for this product? (true/false)";
  std::cin >> std::boolalpha >> cash;

  std::cout << "Maximum storing temperature:";
  std::cin >> temp;

  std::cout << name << '\n';
  std::cout << "Price:...........";
  std::cout.fill('0');
  std::cout.width(8);
  std::cout << std::uppercase << std::hex << price << '\n';
  std::cout << "Has cash-back:......." << std::boolalpha << cash << '\n';
  std::cout << "Max temperature:......"<< std::noshowpos << std::dec << temp << '\n';
 
  return 0;
}