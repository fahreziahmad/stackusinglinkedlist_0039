#include <iostream>

using namespace std;
// Node class representing a single node in the linked list
class node {
public:
	int data;
	node* next;

	node() {
		next = NULL;
	}
};
// Stack class
class stack {
private:
	node* top; // Pointer to the top node of the stack

public:
	stack() {
		top = NULL; // Initialize the stack with a null top pointer
	}
	/ Push operation : Insert an element onto the top of the stack
		int push(int value) {
		node* newNode = new node(); // Allocate memory for the new node
		newNode->data = value; // Assign value
		newNode->next = top; // Set the next pointer of the new node to the 
current top node
             top = newNode; // Update the top pointer to the new node
             cout << "Push value: " << value << endl;
             return value;
	}
	// Pop operation: Remove the topmost element from the stack
	void pop() {
		if (isEmpty()) {
			cout << "Stack is empty." << endl;
		}
		else {
			cout << "Popped value: " << top->data << endl;
			top = top->next; // Update the top pointer to the next node
		}
	}
	// Peek/Top operation: Retrieve the value of the topmost element without removing it
	void peek() {
		if (isEmpty()) {
			cout << "Stack is empty." << endl;
		}
		else {
			cout << "Top value: " << top->data << endl;
		}
	}
	// IsEmpty operation: Check if the stack is empty
	bool isEmpty() {
		return top == NULL; // Return true if the top pointer is NULL, indicating an empty stack
	}
};
int main() {
	stack stack;
	int choice = 0;
	int value;
	while (choice != 4) {
		cout << "1. Push\n";
		cout << "2. Peek\n";
		cout << "3. Pop\n";
		cout << "4. Exit\n";
		cout << "Enter your choice: ";
		cin >> choice;
		
		switch (choice) {
		case 1:
			cout << "Enter the value to push: ";
			cin >> value;
			stack.push(value); // Push the entered value onto the stack
			break;
		case 2:
			if (!stack.isEmpty()) {
				stack.peek(); // Get the value of the top element
			}
			else {
				cout << "Stack is empty. No top value." << endl;
			}
			break;
		case 3:
			if (!stack.isEmpty()) {
				stack.pop(); // Pop the top element from the stack
			}
			else {
				cout << "Stack is empty. Cannot pop." << endl;
			}
			break;


	






