/*
   Name:         Josh Ewalt
   Semester:     2
   Due:          03/05/2021
   Lab:          Lab 4 (Recursion)
   Description:  Write a program that will reverse the order of a stack.
   For this lab, you will use your stack class and you’re not allowed to use any C++ loops.
*/
#pragma once
#include "ItemType.h"
class Node {
private:
	ItemType value;
	Node* next;
public:
	ItemType getValue() { return value; }
	//Pre:
	//Post: Returns the value this node holds

	void setValue(ItemType newItem) { value = newItem; }
	//Pre:  An ItemType to set this Node's value
	//Post: Sets this node's value to the ItemType

	Node* getNext() { return next; }
	//Pre:
	//Post: Returns the next item on the stack

	void setNext(Node* newNext) { next = newNext; }
	//Pre:  A node to set as the next node to this one
	//Post: Sets the next node to the one given
};