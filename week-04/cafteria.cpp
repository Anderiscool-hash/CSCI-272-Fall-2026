#include <iostream>
#include <vector>

using namespace std;
int main() {
  vector <string> menu;
  menu.push_back("Pizza");
  menu.push_back("Burger");
  menu.push_back("Salad");
  menu.push_back("Pasta");
  menu.push_back("Soup");
  menu.push_back("Dessert");

  
  for (string i : menu) {
    cout << i << " " <<endl;
  }

  return 0;
}