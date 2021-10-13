/*
  circular queue
*/
#include <iostream>
#define queueLength 4
using namespace std;

int queue[queueLength], qFront = -1, qRear = -1;
void enQueue()
{
  int userElemet;
  if (qFront == -1 && qRear == -1)
  {
    qFront = qRear = 0;
    cout << "\nEnter Element To Enqueue : ";
    cin >> userElemet;
    queue[qRear] = userElemet;
  }
  else if ((qRear + 1) % queueLength == qFront)
  {
    cout << "\nQueueOverFlow\n";
  }
  else
  {
    qRear = (qRear + 1) % queueLength;
    cout << "\nEnter Element To Enqueue : ";
    cin >> userElemet;
    queue[qRear] = userElemet;
  }
  // cout << "\nfront : " << qFront << " rear : " << qRear << endl; // For Debugging
}

void deQueue()
{
  if (qFront == -1)
  {
    cout << "\nQueueUnderFlow";
  }
  else if (qFront == qRear)
  {
    cout << "\nDeQueued Element : " << queue[qFront];
    qFront = qRear = -1;
  }
  else
  {
    cout << "\nDeQueued Element : " << queue[qFront];
    qFront = (qFront + 1) % queueLength;
  }
  // cout << "\nfront : " << qFront << " rear : " << qRear << endl; // For Debugging
}

void displayQueue()
{
  if (qFront == -1)
  {
    cout << "\nQueue Is Empty";
  }
  else
  {
    int i = qFront;
    cout << "\nQueue Elements Are : \n";
    while (i != qRear)
    {
      cout << "(" << i << ")" << queue[i] << " ";
      i = (i + 1) % queueLength;
    }
    cout << "( " << i << ")" << queue[i] << " ";
  }
  // cout << "\nfront : " << qFront << " rear : " << qRear << endl; // For Debugging
}

int main()
{
  int userOption;

  cout << "1.Enqueue : \n2.Dequeue : \n3.Display : \n4.Exit :";

  do
  {
    cout << "\nEnter Choice : ";
    cin >> userOption;
    // cout << "Option : " << userOption; // For Debugging
    switch (userOption)
    {
    case 1:
      enQueue();
      break;

    case 2:
      deQueue();
      break;

    case 3:
      displayQueue();
      break;

    case 4:
      cout << "\nExit";
      break;

    default:
      cout << "\nInvalid Input";
      break;
    }
  } while (userOption != 4 && userOption != 0);
}
