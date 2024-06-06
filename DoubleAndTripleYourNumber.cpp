//A program for doubling a given integer and outputing the value
//A program for tripling a given integer and outputing the value

#include <iostream>

using namespace std;

int main()
{
  cout << "Enter an integer: ";

  int num{};
  cin >> num;

  cout << "Double " << num << " is: " << num * 2 << endl;
  cout << "Triple " << num << " is: " << num * 3 >> endl;

  return 0;
}
