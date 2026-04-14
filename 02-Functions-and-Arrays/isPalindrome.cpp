#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(string);
int main()
{
  string word;
  cout << "Enter the word: ";
  cin >> word;
  if (isPalindrome(word))
    cout << "Yes, it's a palindrome";
  else
    cout << "No, it's not";

  return 0;
}
bool isPalindrome(string word)
{
  bool cheacer = true;
  int thelength = word.length();
  for (int i = 0; i < thelength / 2; i++)
  {
    if (word[i] != word[thelength - 1 - i])
    {
      cheacer = false;
      break;
    }
  }
  return cheacer;
}
