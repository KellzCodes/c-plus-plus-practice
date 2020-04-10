#include <iostream>

int main() {
  // Declare 3 variables for foreign currency
  double pesos;
  double reais;
  double soles;
  
  // Decare US currency
  double dollars;
  
  // Ask user for amount of pesos
  std::cout << "Enter number of Colombian Pesos: ";
  // Store answer in pesos
  std::cin >> pesos;
  
  // Ask user for amount of reais
  std::cout << "Enter number of Brazilian Reais: ";
  // Store answer in reais
  std::cin >> reais;
  
  // Ask user for amount of soles
  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;
  
  // Conversion rates for each currency
  double peso_conversion = 0.042;
  double reais_conversion = 0.20;
  double soles_conversion = 0.30;
  
  // Write an equation that solves for total USD
  dollars = (peso_conversion * pesos) + (reais_conversion * reais) + (soles_conversion * soles);
  
  // Display total amount of USD
  std::cout << "US Dollars = $" << dollars << "\n";
}