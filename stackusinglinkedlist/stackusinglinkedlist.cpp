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
