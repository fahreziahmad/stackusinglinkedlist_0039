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