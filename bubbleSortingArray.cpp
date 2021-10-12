#include <iostream>
using namespace std;

int main()
{
  int myArray[99], arrLeng, i, j, temp;
  // int myArray[] = {4, 1, 6, 8}, arrLeng, i, j, temp;
  // arrLeng = 4;

  cout << "Enter Array Length : ";
  cin >> arrLeng;

  cout << "\nEnter Array Elements : ";
  for (i = 0; i < arrLeng; i++)
    cin >> myArray[i];

  cout << "\nEnter Array are : ";

  for (i = 0; i < arrLeng; i++)
    cout << myArray[i] << " ";

  for (i = 0; i < arrLeng; i++)
  {
    for (j = 0; j < arrLeng; j++)
    {
      if (myArray[i] < myArray[j])
      {
        temp = myArray[j];
        myArray[j] = myArray[i];
        myArray[i] = temp;
      }
    }
  }

  cout << "\nSorted Array are : ";

  for (i = 0; i < arrLeng; i++)
    cout << myArray[i] << " ";
}