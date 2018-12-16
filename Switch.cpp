#include <iostream>

int main() {
  double weight;
  int planet;
  std::cout << "Your weight?\n";
  std::cin >> weight;
  std::cout << "Which planet to fight in? Please gib number.\n";
  std::cin >> planet;
 switch(planet) {
    case 1: 
      weight = weight * 0.78;
      std::cout << "Your weight on Venus is:" <<weight;
      break;
   case 2: 
      weight = weight * 0.39;
      std::cout << "Your weight on Mars is:" <<weight;
      break;
   case 3: 
      weight = weight * 2.65;
      std::cout << "Your weight on Jupiter is:" <<weight;
      break;
   case 4: 
      weight = weight * 1.17;
      std::cout << "Your weight on Saturn is:" <<weight;
      break;
   case 5: 
      weight = weight * 1.05;
      std::cout << "Your weight on Uranus is:" <<weight;
      break;
   case 6: 
      weight = weight * 1.23;
      std::cout << "Your weight on Neptune is:" <<weight;
      break;
   default:
     std::cout <<"Invalid planet number!\n";
    
  }
   
