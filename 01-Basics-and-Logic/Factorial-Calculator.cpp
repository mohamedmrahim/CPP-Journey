#include <iostream>

using namespace std;

int main()
{

    double number, factorial=1;

  cout << "Enter a positive number \n";
  cin >> number;
 while (number < 0) {
        cout << "Error! Number must be positive. \n";
        cout << "Enter a positive number \n";
        cin >> number;
  }
        for ( int counter =1; counter <= number ; counter++ )
             factorial = factorial * counter ;
        cout <<" Factorial ="<<factorial <<"\n";

 return 0 ;
}
