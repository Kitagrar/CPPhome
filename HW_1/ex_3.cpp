#include <iostream>
#include <math.h>

int main() {
  int a, b, c;
  double dis;

  std::cin >> a >> b >> c;

  dis = sqrt(pow(b, 2) - 4 * c * a);

  if (dis > 0) {
    std::cout << (-float(b) + sqrt(dis)) / 2 * a
              << (-float(b) - sqrt(dis)) / 2 * a;
  } else if (dis == 0) {
    std::cout << -float(b) / 2 * a;
  } else {
    std::cout << "Корней нет";
  }
  return 0;
}
