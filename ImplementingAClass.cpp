#include <iostream>

using namespace std;

int getValueFromUser()
{

  cout << "Enter an integer: ";
  int input{};
  cin >> input;
  
  return input;
}

void printDouble(int num)
{
  cout << num << " doubled is: " << num * 2 << '\n';
}

int main()
{
  int num{ getValueFromUser() };
  printDouble(num);

  return 0;
}
