//Input 2 integers and determine what the sum of both integers are
//Input 2 integers and determine what the difference of both integers are

#include <iostream>

using namespace std;

int main()
{
  int num{};
  int num2{};

  cout << "Enter an integer: ";
  cin >> num;

  cout << "Enter an integer: ";
  cin >> num2;

  cout << num << " + " << num2 << " is " << num + num2 << "." << endl;
  cout << num << " - " << num2 << " is " << num - num2 << "." << endl;

  return 0;
}
