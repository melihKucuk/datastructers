//#include <iostream>
//
//using namespace std;
//
//typedef struct MyQueue
//{
//    int myArr[100];
//    int top, rear;
//
//    MyQueue()
//    {
//        myArr[100] = NULL;
//        top = -1, rear = -1;
//    }
//};
//
//MyQueue myqueue;
//
//void Enqueue(int data) // 1 1
//{
//    if (myqueue.rear == -1 && myqueue.top == -1)
//    {
//        myqueue.myArr[++myqueue.rear] = data; // rear = 0 top = 0
//        myqueue.top = myqueue.rear;
//    }
//    else
//    {
//        myqueue.myArr[++myqueue.top] = data;
//    }
//}
//
//void Dequeue()
//{
//    if (myqueue.rear == -1) { cout << "the queue is empty" << endl; return; } // NULL 2 3 4 -> rear=0, top=3
//
//    myqueue.myArr[myqueue.rear] = NULL;
//
//    for (int i = 0; i < myqueue.top + 1; i++)
//    {
//        myqueue.myArr[i] = myqueue.myArr[i + 1];
//    }
//    myqueue.top--;
//}
//
//void Show()
//{
//    if (myqueue.top == -1) { cout << "the queue is empty" << endl; return; }
//
//    for (int i = 0; i < myqueue.top + 1; i++)
//    {
//        cout << myqueue.myArr[i] << " ";
//    }
//    cout << endl << "rear:" << myqueue.rear << " top:" << myqueue.top << endl;
//}
//
//int main()
//{
//    Show();
//    Enqueue(10);
//    Show();
//    Enqueue(20);
//    Show();
//    Enqueue(30);
//    Show();
//    Enqueue(40);
//    Show();
//    Dequeue();
//    Show();
//    Dequeue();
//    Show();
//    Dequeue();
//    Show();
//    Dequeue();
//    Show();
//
//    return 0;
//}