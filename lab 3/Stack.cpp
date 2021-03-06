/*
    Name:         Josh Ewalt
   Semester:     2
   Due:          03/05/2021
   Lab:          Lab 4 (Recursion)
   Description:  Write a program that will reverse the order of a stack.
   For this lab, you will use your stack class and you’re not allowed to use any C++ loops.
*/
#include "Stack.h"

bool Stack::IsEmpty() {
	return top == NULL;
}
ItemType Stack::Top() {
	return top->getValue();
}
bool Stack::IsFull() {
	Node* location;
	try {
		location = new Node();
		delete location;
		return false;
	}
	catch (bad_alloc exception) {
		return true;
	}
}
Stack::~Stack() {
	while (IsEmpty() == false) {
		Pop();
	}
}
void Stack::Push(ItemType item) {
	if (IsFull()) {
		return;
	}
	Node* newTopNode = new Node();
	newTopNode->setValue(item);
	if (IsEmpty()) {
		top = newTopNode;
	}
	else {
		newTopNode->setNext(top);
		top = newTopNode;
	}
}
void Stack::Show() {
	Node* currentItem = top;
	while (currentItem != NULL) {
		cout << currentItem->getValue().getValue() << " ";
		currentItem = currentItem->getNext();
	}
	cout << endl;
}
void Stack::Pop() {
	Node* newTop;
	newTop = top->getNext();
	top = newTop;
}