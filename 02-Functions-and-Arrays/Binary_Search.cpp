#include <bits/stdc++.h>
using namespace std;
bool isfound(vector<long long> &arr, long long n)
{
  bool found = false;
  long long size = arr.size();
  long long low = 0, high = size - 1;
  long long mid = 0;
  while (low <= high)
  {
    mid = (low + high) / 2;
    if (arr[mid] == n)
    {
      found = true;
      break;
    }
    else if (arr[mid] > n)
    {
      high = mid - 1;
    }
    else if (arr[mid] < n)
    {
      low = mid + 1;
    }
  }
  return found;
}
int main()
{
  cout << "=========================================\n";
  cout << "           Binary Search Tool     \n";
  cout << "=========================================\n\n";
  long long n, q;
  cout << "Enter the size of the array: ";
  cin >> n;
  cout << "Enter the number of search queries: \n";
  cin >> q;

  vector<long long> arr(n);
  cout << "Enter " << n << " numbers to fill the array:\n";
  for (int l = 0; l < n; l++)
  {
    cin >> arr[l];
  }
  sort(arr.begin(), arr.end());
  cout << "The array sorted successfully for Binary Search\n\n";

  long long num = 0;
  for (int i = 0; i < q; i++)
  {
    cout << "Query (" << i + 1 << ") Enter number to search for: ";
    cin >> num;
    if (isfound(arr, num))
      cout << "found\n";
    else
      cout << "not found\n";
  }

  cout << "=========================================\n";
  cout << "Thank you for using the tool!\n";

  return 0;
}
