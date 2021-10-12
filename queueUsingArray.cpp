#include <iostream>
using namespace std;

int queue[2], qLeng = 2, qFront = -1, qRear = -1;

void enQueue()
{
  // cout << "\nfront , rear : " << qFront << " " << qRear; // for Debugging
  int item;
  if (qRear < qLeng - 1)
  {
    cout << "\nEnter Element To Enqueue : ";
    cin >> item;
    if (qFront < 0)
      qFront = 0;
    qRear++;
    queue[qRear] = item;
    cout << "Enqueued : " << item << endl;
  }
  else
  {
    cout << "\nQueue Over Flow\n";
  }
}

void deQueue()
{
  // cout << "\nfront , rear : " << qFront << " " << qRear; // for Debugging
  if (qFront >= 0 && qRear >= qFront)
  {
    cout << "\ndeQueued : " << queue[qFront] << endl;
    qFront++;
  }
  else
  {
    cout << "\nQueue Under Flow\n";
  }
}

void queueDisplay()
{
  // cout << "\nfront , rear : " << qFront << " " << qRear; // for Debugging
  if (qFront >= 0 && qRear >= qFront)
  {
    cout << "\ndisplaying queue\n";
    for (int i = qFront; i <= qRear; i++)
    {
      cout << queue[i] << " ";
    }
    cout << endl;
  }
  else
  {
    cout << "\nQueue Is Empty\n";
  }
}

int main()
{
  int userOption;
  cout << "Enter Your Choice :\n";
  do
  {
    cout << "1.Queue Insertion\n2.Queue Deletion\n3.Display\n4.Exit\n";
    cin >> userOption;
    // cout << "userOption : " << userOption;
    if (userOption == 1)
    {
      enQueue();
    }
    else if (userOption == 2)
    {
      deQueue();
    }
    else if (userOption == 3)
    {
      queueDisplay();
    }
    else if (userOption == 4)
    {
      cout << "Exit";
    }
    else
    {
      cout << "Invalid Input";
    }

  } while (userOption != 4);
}