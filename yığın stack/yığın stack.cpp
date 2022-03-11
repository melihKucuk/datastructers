//#include <iostream>
//
//using namespace std;
//
//typedef struct node
//{
//    int data;
//    node* next;
//};
//
//node* root = null, * top = null;
//
//// push
//node* push(node* _root, int _data)
//{
//    if (_root == null)
//    {
//        _root = new node;
//        _root->data = _data;
//        top = _root;
//        _root->next = null;
//
//        return _root;
//    }
//
//    node* iter = _root;
//
//    while (iter->next != null)
//        iter = iter->next;
//
//    node* newnode = new node;
//    newnode->data = _data;
//    iter->next = newnode;
//    top = newnode;
//    newnode->next = null;
//
//    return _root;
//}
//
//// pop
//node* pop(node* _root)
//{
//    if (_root == null) { cout << "the stack is empty(pop)" << endl; return _root; }
//
//    if (_root->next == null)
//    {
//        node* temp = _root;
//        top = null;
//        _root = null;
//        delete temp;
//
//        return _root;
//    }
//
//    node* iter = _root;
//
//    while (iter->next->next != null)
//        iter = iter->next;
//
//    node* temp = new node;
//    temp = iter->next;
//    top = iter;
//    iter->next = null;
//    delete temp;
//
//
//    return _root;
//}
//
//// display
//int display(node* _root)
//{
//    if (_root == null) { cout << "the stack is empty(display)" << endl; return -1; }
//
//    while (_root != null)
//    {
//        cout << _root->data << " ";
//        _root = _root->next;
//    }
//    cout << endl << "top:" << top->data << endl << endl;
//    return 1;
//}
//
//int main()
//{
//    display(root);
//    root = push(root, 7);
//    display(root);  
//    root = push(root, 3);
//    display(root);
//    root = push(root, 9);
//    display(root);
//    root = push(root, 8);
//    display(root);
//    root = pop(root);
//    display(root);
//    root = pop(root);
//    display(root);
//    root = pop(root);
//    display(root);
//    root = pop(root);
//    display(root);
//    root = push(root, 8);
//    display(root);
//
//    return 0;
//}