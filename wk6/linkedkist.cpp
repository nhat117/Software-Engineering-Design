#include <iostream>
using namespace std;
class node {
	public : // Not a good practice
		int data; // Can be any data 
		node * next;
};

// Build a three element linked -list
int main (int argc, char * argv[]) {
	// Create Linked - list
	// node * head = NULL;
	// node * second = NULL;
	// node * third = NULL;

	// head = new node;
	// second = new node;
	// third = new node;

	// //Could be any int data !

	// head -> data = 123;
	// head -> next = second;

	// second -> data = 234;
	// second -> next = third;

	// third -> data = 345;
	// third -> next = NULL;

	//Loops implement
	node * head = NULL;
	node * current = NULL;
	node * newNode = NULL;

	current = head;
	for (int i = 1; i <= 3; i ++) {
		head = newNode;
		newNode = new node;
		newNode -> data = i; // Example of an int data
		newNode -> next = NULL; // Append to the end
		if ( i == 1) {
			head = newNode;
		} else {
			current -> next = newNode;
		}
		current = newNode; // Current last node
	}
	


	// Traversing linked list
	current = head;
	while (current != NULL) {
		cout << current -> data << endl;
		current = current -> next;
	}
}