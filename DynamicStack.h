#include <iostream>
#include <cstdlib>

using namespace std;

template <typename T>
class DynamicStack {
private:
    struct Node {
        T data;
        Node* next;
    };

    Node* top;

public:
    DynamicStack() {
        top = nullptr;
    }

    bool isEmpty() {
        return top == nullptr;
    }

    void push(T item) {
        Node* newNode = new Node;
        newNode->data = item;
        newNode->next = top;
        top = newNode;
    }

    T pop() {
        if (isEmpty()) {
            cerr << "Stack underflow" << endl;
            exit(1);
        }
        Node* temp = top;
        T item = temp->data;
        top = top->next;
        delete temp;
        return item;
    }

    T peek() {
        if (isEmpty()) {
            cerr << "Stack is empty" << endl;
            exit(1);
        }
        return top->data;
    }

    int size() {
        int count = 0;
        Node* current = top;
        while (current != nullptr) {
            count++;
            current = current->next;
        }
        return count;
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack: ";
        Node* current = top;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};