#include <iostream>

using namespace std;

int main()
{
    double num1, num2; char op;

    cout<<"Enter first number: "<<endl;
    cin>> num1;

     cout<<"Enter operator: "<<endl;
    cin>> op;

     cout<<"Enter second number: "<<endl;
    cin>> num2;

  if (op== '+') {
      cout <<"Result: "<< num1 + num2;
      }
        else if (op== '-') {
      cout <<"Result: "<< num1 - num2;
      }
       else if (op== '*') {
      cout <<"Result: "<< num1 * num2;
      }
       else if (op== '/') {
            if (num2 != 0)
         cout <<"Result: "<< num1 / num2;
      else
            cout << "Error! Division by zero.";
       } else {
        cout << "Invalid operator!";
      }



    return 0;
}
