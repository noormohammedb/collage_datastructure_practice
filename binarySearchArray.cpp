#include <iostream>
using namespace std;
int main()
{
  int myArray[99], arrLeng, searchKey, i, flag = 0, first = 0, middle, last;
  // int searchKey, i, flag = 0, first = 0, middle, last; // for debugging
  // int arrLeng = 10, myArray[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20}; // for debugging

  cout << "Enter Array Length : ";
  cin >> arrLeng;

  last = arrLeng - 1;

  cout << "Enter Array Elements in Ascending Order :\n";
  for (i = 0; i < arrLeng; i++)
    cin >> myArray[i];

  cout << "Entered Array Are :\n";
  for (i = 0; i < arrLeng; i++)
    cout << myArray[i] << " ";

  cout << "\nEnter Search Element : ";
  cin >> searchKey;

  // for (i = 0; first <= last; i++) // to prevent infinity loop
  for (; first <= last;)
  {
    middle = (first + last) / 2;
    cout << "\nfirst : " << first << " middle : " << middle << " last : " << last; // for debugging
    if (myArray[middle] > searchKey)
    {
      last = middle - 1;
    }
    else if (myArray[middle] < searchKey)
    {
      first = middle + 1;
    }
    if (myArray[middle] == searchKey)
    {
      flag = 1;
      break;
    }

    // if (i > 15) // to prevent infinity loop
    // {
    //   break;
    // }
  }
  if (flag)
  {
    cout << "\nFound Search Key :" << middle + 1 << endl;
  }
  else
  {
    cout << "\nNot Found" << endl;
  }
}
