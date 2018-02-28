#include <iostream>
using namespace std;

int main()
{
  int number, num, rem, sum = 0,digit;
    cin >>number;

  num = number;

  while(num != 0)
  {
      digit = num % 10;
      sum =sum+ digit * digit * digit;
      num =num/ 10;
  }

  if(sum == number)
    cout << number << " is an Armstrong number.";
  else
    cout << number << " is not an Armstrong number.";

  return 0;
}
