#include <iostream>
using namespace std;
int main()
{
  int number , limit , sumpositive=0 , negativecounter=0;
  cout<<" Enter the numbers limit";
  cin>> limit;

  for (int i=1 ; i<=limit ; i++ )
  {
    cout << "Enter number (" << i << "): ";
    cin>> number;
    if (number > 0)
     sumpositive+=number;
    else if (number < 0)
     negativecounter++;
  }
  cout<<" The sum of positive numbers= "<<sumpositive<<"\n";
  cout<<" Number of negative numbers= "<<negativecounter<<"\n";

  return 0;
}
