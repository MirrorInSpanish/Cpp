#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  //srand used to set the starting value (seed) for generating a sequence of pseudo-random integer values.
  //srand(time(NULL)) makes use of the computer's internal clock to control the choice of the seed.
  time(nullptr); //Jan 1 1970
  srand(time(nullptr));

  //Initializes integer variable number with the remainder of rand() / 100 and outputs variable number
  int number = rand() % 100;
  cout << number;

  return 0;
}
