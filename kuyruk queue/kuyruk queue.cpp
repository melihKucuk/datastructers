//#include <iostream>
//
//using namespace std;
//
//typedef struct Node{
//    int data;
//    Node* next;
//};
//
//Node* head = nullptr, * front = nullptr, * rear = nullptr;
//
//// enqueue
//Node* Enqueue(Node* _head, int _data)
//{
//    if (_head == nullptr)
//    {
//        _head = new Node;
//        _head->data = _data;
//        _head->next = nullptr;
//        front = _head;
//        rear = _head;
//
//        return _head;
//    }
//
//    Node* iter = _head;
//
//    while (iter->next != nullptr)
//        iter = iter->next;
//
//    Node* newNode = new Node;
//    newNode->data = _data;
//    iter->next = newNode;
//    newNode->next = nullptr;
//    rear = newNode;
//
//    return front;
//}
//
//// Dequeue
//Node* Dequeue(Node* _head)
//{
//    if (_head == nullptr) { cout << "the queue is empty(dequeue)" << endl; return _head; }
//
//    if (_head->next == nullptr)
//    {
//        Node* temp = new Node;
//        temp = front;
//        front = nullptr;
//        rear = nullptr;
//        delete temp;
//
//        return front;
//    }
//    if (_head->next->next == nullptr)
//    {
//        Node* temp = new Node;
//        temp = front;
//        front = front->next;
//        rear = front;
//        delete temp;
//
//        return front;
//    }
//
//    Node* temp = new Node;
//    temp = front;
//    front = front->next;
//    delete temp;
//
//    return front;
//}
//
////Display
//int Display(Node* _head)
//{
//    if (_head == nullptr) { cout << "the queue is empty(display)" << endl; return -1; }
//
//    while (_head != nullptr)
//    {
//        cout << _head->data << " ";
//        _head = _head->next;
//    }
//    cout << endl << "front:" << front->data << ", rear:" << rear->data << endl << endl;
//    return 1;
//}
//
//int main()
//{
//    Display(head);
//    head = Enqueue(head, 5);
//    Display(head);
//    head = Enqueue(head, 3);
//    Display(head);
//    head = Enqueue(head, 5);
//    Display(head);
//    head = Enqueue(head, 9);
//    Display(head);
//    head = Dequeue(head);
//    Display(head);
//    head = Dequeue(head);
//    Display(head);
//    head = Dequeue(head);
//    Display(head);
//    head = Dequeue(head);
//    Display(head);
//
//    return 0;
//}