#include <iostream>
using namespace std;

class Stack
{
private:
    int element;
    int *arr;
    int top;
    int size;

public:
    
    Stack(int size)                                               
    {
        this->top=-1;
        this->size=size;//     this->size=5;
        this->arr = new int[this->size];
    }

    void push()
    {
        if (top == this->size - 1)
        {
            cout << "Stack is full " << endl;
        }
        else
        {
            top++;
            cout << "enter the element" << endl;
            cin >> this->element;
            this->arr[top] = this->element;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else
            arr[top] = 0;
        top--;
    }
    void peek()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else
            cout << "element at top =" <<" ["<< top << "]  :"<< arr[top] << endl;
    }
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << " elemnets at "
                << "[ "<<i <<" ]"<< " : " <<arr[i]  << endl;
        }
    }
};

int main()
{

    Stack s1(5);
    //s1.pop();
    s1.push();
    s1.push();
    s1.push();
    s1.push();
    s1.push();
    s1.push();
    s1.pop();
    //s1.push();
    s1.peek();
    s1.print();

    return 0;
}