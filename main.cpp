//csci 100 Chapter 2 practice
//Restaurant Bill
//Written by Coy Potter
#include <iostream>
#include <string>
using namespace std;

int main() {
  // leave the next line - it clears the screen between coding runs
  cout << "\033[2J\033[1;1H";
  
  // double meal = 44.50; 
  double meal = 44.50;                // Cost of meal
  double tax = meal * 0.0675;        // Tax,at 6.75%
  double subtotal = meal + tax;     // Subtotal
  double tip = subtotal * 0.15;    //Amount of 15% tip
  double total = subtotal + tip;  //total charges

  cout << "Meal cost: " << meal << endl;
  cout << "Tax: " << tax << endl;
  cout << "Tip: " << tip << endl;
  cout << "Total: " << total << endl;

  return 0;
}
//Ready to grade