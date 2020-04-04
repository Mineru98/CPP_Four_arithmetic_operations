#include <iostream>
using namespace std;

int main() {
  char op;
  int v1, v2;

  for (;;) {
    std::cout << "계산하려는 수식을 입력하세요(0+0은 종료): ";
    std::cin >> v1 >> op >> v2;

    // 0 + 0 일시 루프 종료
    if (v1 == 0 && v2 == 0)
      break;

    std::cout << v1 << " " << op << " " << v2 << " = ";

    switch (op) {
    case '+':
      std::cout << v1 + v2;
      break;
    case '-':
      std::cout << v1 - v2;
      break;
    case '*':
      std::cout << v1 * v2;
      break;
    case '/':
      std::cout << (double) v1 / v2;
      break;
    default:
      std::cout << "수식을 확인해 주십시오" << std::endl;
      break;
    }

    std::cout << '\n';
  }

  return 0;
}
