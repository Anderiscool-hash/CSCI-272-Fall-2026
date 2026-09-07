#include <iostream>
using namespace std;

void increment(int& number){
    number++;
}

void swapNumbers(int& a , int& b){
    int temp = a;
    a = b;
    b = temp;
}
int main() {
  
  int x = 5;
  cout << " Before :" << x << endl;
  increment(x);
  cout << " After :" << x << endl;
  
  
  int p = 10;
  int q = 20;
  
  swapNumbers(p,q);
  
  cout << p << " " << q << endl;
  
  
  
  
  
  
  
  
  return 0;
}