#include "DynamicStack.h"
#include <iostream>
using namespace std;

int main() {
    DynamicStack<int> intStack;
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);
    intStack.push(40);
    intStack.push(50);
    intStack.display();
    cout << "Size of stack: " << intStack.size() << endl;
    cout << "Top element: " << intStack.peek() << endl;



    cout << "Pop elements from stack except last num: ";
    int i =0;

    while (i <= 3) {
        cout << intStack.pop() << " ";
        i++;
    }
    
    cout << endl;

    cout<<"nums left in the stack: " << intStack.peek()<<endl;

    return 0;
}