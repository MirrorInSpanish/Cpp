#include <iostream>

using namespace std;

int main()
{
//Outputs "Enter value for Fahrenheit to convert into Celsius: "
  cout  << "Enter value for Fahrenheit to convert into Celsius: ";

//Initializes variable f as a double
  double f;

//Asks user to input a variable and assigns that variable to f
  cin   >> f;

//Outputs the value of f subtracted by 32 multipled by the value of 5 divided by 9, which is the celsius conversion  
  cout  << (f - 32) * 5/9 << endl;
  
  return 0;
}
