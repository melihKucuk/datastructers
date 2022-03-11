//#include<iostream>	
//using namespace std;
//
//typedef struct node {
//	int data;
//	node* next;
//};
//node* root = NULL, * top = NULL;
//
//
//node* push(node* _root, int _data)
//{
//	if (_root == NULL) {
//		_root = new node;
//		_root->data = _data;
//		top = _root;
//		_root->next = NULL;
//
//		return _root;
//	}
//	node* iter = _root;
//	while (iter->next != NULL)
//		iter = iter->next;
//	node* newnode = new node;
//	newnode->data = _data;
//	iter->next = newnode;
//	top = newnode;
//	newnode->next = NULL;
//
//	return _root;
//
//
//}
//
//node* pop(node* _root){
//	if (_root==NULL)
//	{
//		cout << "Yığın boş";
//		return _root;
//	}
//	if (_root->next==NULL)
//	{
//		node* temp = _root;
//		top = NULL;
//		_root = NULL;
//		delete temp;
//		return _root;
//	}
//
//	node* iter = _root;
//	
//	while (iter->next->next != NULL)
//		iter = iter->next;
//
//	node* temp = new node;
//	temp = iter->next;
//	top = iter;
//	iter->next = NULL;
//	delete temp;
//
//	return _root;
//
//
//
//
//
//
//}int display(node* _root)
//{
//	if (_root == NULL) { cout << "the stack is empty(display)" << endl; return -1; }
//
//	while (_root != NULL)
//	{
//		cout << _root->data << " ";
//		_root = _root->next;
//	}
//	cout << endl << "top:" << top->data << endl << endl;
//	return 1;
//}
//
//
//
//
//int main()
//{
//	display(root);
//	root = push(root, 7);
//	display(root);
//	root = push(root, 3);
//	display(root);
//	root = push(root, 9);
//	display(root);
//	root = push(root, 8);
//	display(root);
//	root = push(root, 8);
//	display(root);
//	display(root);
//	root = push(root, 12);
//	display(root);
//	display(root);
//	root = push(root, 26);
//	display(root);
//
//	display(root);
//	root = pop(root);
//	display(root);
//	return 0;
//}
