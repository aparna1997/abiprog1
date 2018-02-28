#include <iostream>
using namespace std;

int main()
{
  int num1, num2, i, num;

    cin >> num1;

  cin >> num2;

  cout << "odd numbers"<<num1 << " and " << num2 << " are: " << endl;
  for(i = num1; i <= num2; i++)
  {
  	if(i%2==0)
  	cout<<i;
  	
  }

  return 0;
}
