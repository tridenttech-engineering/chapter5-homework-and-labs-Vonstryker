//hw5-12.cpp - displays the total owed
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
double discountRate = 0.5;
  double priceItem1 = 0.0;
  double priceItem2 = 0.0;
  double amountTotal = 0.0;

  cout << "Enter price of item 1: ";
  cin >> priceItem1;

  cout << "Enter price of item 2: ";
  cin >> priceItem2;

  if (priceItem1 < priceItem2)
    priceItem1 -= priceItem1 * discountRate;
  else
    priceItem2 -= priceItem2 * discountRate;

  cout << fixed << setprecision(2);
  amountTotal = priceItem1 + priceItem2;
  cout << amountTotal;
	return 0;
}	//end of main function
