#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
    Stack stack1;
    stack1.push(30);
    stack1.push(50);
    stack1.push(20);
    stack1.push(10);
    stack1.pop();

    cout<<"El elemento top: "<<stack1.top()<<endl;
    stack1.pop();
    cout<<"El elemento despu�s de pop: "<<stack1.top()<<endl;

    return 0;
}
