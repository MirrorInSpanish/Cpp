#include <iostream>

using namespace std;

int main()
{
//Outputs "Enter value for Fahrenheit to convert into Celsius: "
  cout  << "Enter value for Fahrenheit to convert into Celsius: ";

//Initializes variable fahrenheit as a double
  double fahrenheit;

//Asks user to input a value and assigns that value to fahrenheit
  cin   >> fahrenheit;

//Evaluates the value of fahrenheit subtracted by 32 divided by 1.8 and initializes the value double celsius with that value, then outputs "Celsius: ", then outputs celsius
  double celsius = (fahrenheit - 32) / 1.8;
  cout << "Celsius: " << celsius << endl;
  
  return 0;
}
