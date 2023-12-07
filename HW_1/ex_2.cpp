#include <iostream>
#include <cmath>

int main() {
char key;
double val;
std::cout << "Choose the metric to change( a)C-->K / b)deg-->rad / c)rad-->deg / d)EV-->J / e)Pa --> MOM / g)MOM --> Pa)\n";
std::cin >> key >> val;


switch(key){
    case 'a':
    case 'A':
    std::cout << val + 273;
    break;
    case 'b':
    case 'B':
    std::cout << val - 273;
    break;
    case 'c':
    case 'C':
    std::cout <<  val * M_PI / 180;
    break;
    case 'd':
    case 'D':
    std::cout << val * 180. / M_PI;
    break;
    case 'e':
    case 'E':
    std::cout << val * 760. / 101325;
    break;
    case 'g':
    case 'G':
    std::cout << val * 101325. / 760;
    break;
}

return 0;
}