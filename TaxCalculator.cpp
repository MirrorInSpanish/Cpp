#include <iostream>

using namespace std;

int main()
{
  //Initializes double variable sales with value 95000 and outputs "sales: $", then outputs sales
  double sales = 95000;
  cout << "sales: $" << sales << endl;

  //Initializes constant double variable stateTaxRate with value 0.05 and initializes double varirable state with the product of 95000 and stateTaxRate and outputs "state: $", then outputs state
  const double stateTaxRate = 0.04;
  double state = 95000 * stateTaxRate;
  cout << "state: $:" << state << endl;

  //Initializes constant double variable countyTaxRate with value 0.02 and initializes double varirable county with the product of 95000 and countyTaxRate and outputs "state: $", then outputs county
  const double countyTaxRate = 0.02;
  double county = 95000 * countyTaxRate;
  cout << "county: $:" << county << endl;

  //Initializes double variable totalTax with the sum of state and county and outputs "totalTax: $", then outputs totalTax
  double totalTax = state + county;
  cout << "totalTax: $" << totalTax << endl;

  return 0;
}
