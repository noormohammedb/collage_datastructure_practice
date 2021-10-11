#include <iostream>
using namespace std;

int stack[2], stackLeng = 2, top = -1;

void push(int item)
{
  if (top < stackLeng - 1)
  {
    top++;
    stack[top] = item;
    cout << "top : " << top << " stackLeng : " << stackLeng << endl;
  }
  else
  {
    cout << "StackOverFlow" << endl;
    cout << "top : " << top << " stackLeng : " << stackLeng << endl;
  }
}

void pop()
{
  if (top >= 0)
  {
    cout << "poped element : " << stack[top];
    top--;
  }
  else
  {
    cout << "StackUnderFlow" << endl;
  }
}

void display()
{
  if (top >= 0)
  {
    cout << "Stack Elements Are : ";
    for (int i = 0; i <= top; i++)
    {
      cout << stack[i] << " ";
    }
    cout << endl;
  }
  else
  {
    cout << "Stack Empty" << endl;
  }
}

int main()
{
  int userOption, userInput;
  do
  {
    cout << "Enter Option" << endl;
    cout << "1.Push Operation :  " << endl;
    cout << "2.Pop Operation " << endl;
    cout << "3.Display : " << endl;
    cout << "4.Exit " << endl;
    cin >> userOption;
    cout << "userOption : " << userOption << endl;

    if (userOption == 1)
    {
      cout << "Enter Push Element : ";
      cin >> userInput;
      push(userInput);
    }
    else if (userOption == 2)
    {
      pop();
    }
    else if (userOption == 3)
    {
      display();
    }
    else if (userOption == 4)
    {
      cout << "Exit";
    }
    else
    {
      cout << "invalid input";
      break;
    }
    cout << endl;
  } while (userOption != 4);
}