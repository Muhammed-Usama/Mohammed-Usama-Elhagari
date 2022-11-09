#include <iostream>
#define SIZE 5
using namespace std;
int Arr[SIZE];
class Queue
{
public:
  int front = -1, rear = -1;
  bool is_full()
  {
    if (rear != SIZE - 1)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
  bool isempty()
  {
    if (front == -1)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
  void peek()
  {
    cout << "The peek is : " << Arr[front] << endl;
  }
  void Enqueue(int element)
  {
    if (is_full())
    {
      if (front == -1 && rear == -1)
      {
        front++;
        Arr[++rear] = element;
      }
      else
      {
        Arr[++rear] = element;
      }
    }
    else
    {
      cout << "could not insert data ,th stack is full\n ";
    }
  }
  void display()
  {
    cout << "The Queue is : \n";
    for (int i = front; i <= rear; i++)
    {
      cout << Arr[i] << "\t";
    }
    cout << endl;
  }
  void dequeue()
  {
    if (front != -1 && rear != -1 && front <= rear)
    {
      front++;
    }
    else
    {
      cout << "Queue is empty\n";
    }
  }
};
int main()
{
  cout << " ____________ Mohammed Usama Elhagari __________ " << endl;
  cout << " ________ Assignment 1 ______ CE _____CSE111________ " << endl;
  Queue Q1;
  Q1.Enqueue(10);
  Q1.Enqueue(20);
  Q1.Enqueue(15);
  Q1.Enqueue(30);
  Q1.Enqueue(35);
  Q1.display();
  Q1.peek();
  Q1.dequeue();
  Q1.dequeue();
  Q1.dequeue();
  Q1.display();
}
