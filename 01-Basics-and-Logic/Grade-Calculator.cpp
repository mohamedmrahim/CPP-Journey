#include <iostream>

using namespace std;

int main()
{
 float grade;

    cout<<"Enter the grade "<<endl;


    if (!(cin >> grade)) {
    cout << "Error: Invalid input!" << endl;
    return 1;
}
   if (grade >= 0 && grade <= 100) {

    if (grade >= 90) {
        cout << "Excellent";
    } else if (grade >= 80) {
        cout << "Very Good";
    } else if (grade >= 50) {
        cout << "Pass";
    } else {
        cout << "Fail";
    }

} else {
    cout << "Invalid Range!";
}


    return 0;
}
