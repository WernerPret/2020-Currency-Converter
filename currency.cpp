#include <iostream>

int main() {
  
  double pesos;
  double reais;
  double soles;
  double dollars;

  std::cout << "Enter number of Columbian Pesos: ";
  std::cin >> pesos;

  std::cout << "Enter number of Reais: ";
  std::cin >> reais;
  
  std::cout << "Enter number of Soles: ";
  std::cin >> soles;

  // P - D: 0.00026
  // R - D: 0.18
  // S - D: 0.30

  dollars = (0.00026 * pesos) + (0.18 * reais) + (0.30 * soles);

  std::cout << "US Dollars = $" << dollars;
}