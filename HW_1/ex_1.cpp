#include <iostream>

using namespace std;

int main() {

string name;
int price;
string cash;
int temp;

 std::cout << "Product's name:";
 std::cin  >>  name;
 
 std::cout << "Product's price:";
 std::cin  >>  price;
 
 std::cout << "Is cash-back available for this product? (true/false)";
 std::cin  >>  cash;
 
 std::cout << "Maximum storing temperature:";
 std::cin >> temp;

std::cout << name << '\n';
std::cout << "Price:..........." << "000000" << std::hex << price << '\n';
std::cout << "Has cash-back:......." << cash << '\n';
if (temp > 0){
std::cout << "Max temperature:......+" << temp << '\n';
}
else{
std::cout << "Max temperature:......"  << temp<< '\n';
}
  return 0;
}