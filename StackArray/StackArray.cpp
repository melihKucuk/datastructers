#include <iostream>

using namespace std;

typedef struct StackClass
{
    int myArr[100];
    int top;
    StackClass()
    {
        myArr[100] = { NULL };
        top = -1;
    }
};

StackClass mystack;

// Push
int Push(int data)
{
    if (mystack.top == 100 - 1) { cout << "The stack is full" << endl; return mystack.top; } // 99
    else if (mystack.myArr[++mystack.top] == NULL)
    {
        mystack.myArr[mystack.top] = data;
        return mystack.top;
    }
}

// Pop
int Pop()
{
    if (mystack.top == -1) { cout << "The stack is empty" << endl; return mystack.top; }
    else
    {
        mystack.myArr[mystack.top--] = NULL; //  1 1 1 1 NULL NULL top = 
    }
}

// Show
int showStack()
{
    if (mystack.top == -1) { cout << "The Stack is empty !" << endl; return -1; }

    for (int i = 0; i < mystack.top + 1; i++) { cout << mystack.myArr[i] << " "; } // 
    cout << endl;

    return mystack.top;
}

int main()
{
    showStack();
    Push(10);
    showStack();
    Push(20);
    showStack();
    Push(30);
    showStack();
    Push(40);
    showStack();
    Pop();
    showStack();
    Pop();
    showStack();
    Pop();
    showStack();
    Pop();
    showStack();



}