#include <iostream
#include <cstdlib>
include <ctime>

using namespace std;

int main()
{
  //Outputs "Roll the Dice"
  cout << "Roll the Dice" << endl;

  //Initializes variable const short minValue with 1 and initializes variable const short maxValue with 6
  const short minValue = 1;
  const short maxValue = 6;

  //srand used to set the starting value (seed) for generating a sequence of pseudo-random integer values.
  //srand(time(NULL)) makes use of the computer's internal clock to control the choice of the seed.
  srand(time(nullptr));

  //Assigns short variables dice1 and dice2 with a random number between 1 and 6 
  short dice1 = (rand() % (maxValue - minValue + 1)) + minValue;
  short dice2 = (rand() % (maxValue - minValue + 1)) + minValue;

  //Outputs dice1, creates a linebreak, then outputs dice2
  cout << dice1 << endl << dice2;

  return 0;
}
