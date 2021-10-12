#include <iostream>
using namespace std;
int main()
{
  int myArray[99], arrLeng, searchKey, i, flag = 0;

  cout << "\nEnter Array Length : ";
  cin >> arrLeng;

  cout << "\nEnter Array Elements : ";
  for (i = 0; i < arrLeng; i++)
    cin >> myArray[i];

  cout << "\nEnter Search Key : ";
  cin >> searchKey;

  for (i = 0; i < arrLeng; i++)
  {
    if (myArray[i] == searchKey)
    {
      flag = 1;
      cout << "Search Element Found At Index : " << i + 1;
    }
  }
  if (!flag)
  {
    cout << "\nSearch Element Not Found ";
  }
}
