/*
      Name:         Josh Ewalt
   Semester:     2
   Due:          03/05/2021
   Lab:          Lab 4 (Recursion)
   Description:  Write a program that will reverse the order of a stack.
   For this lab, you will use your stack class and you’re not allowed to use any C++ loops.
*/
#include <iostream>
#include "Stack.h"
using namespace std;
Stack reverseStack(Stack stack,Stack stack2){
	if (stack.IsEmpty()) {
		return stack2;
	}
	stack2.Push(stack.Top());
	stack.Pop();
	return reverseStack(stack, stack2);
}
int main() {
	Stack myStack = Stack();
	myStack.Push(1);
	myStack.Push(2);
	myStack.Push(3);
	myStack.Push(4);
	myStack.Push(5);
	myStack.Show();
	myStack = reverseStack(myStack, Stack());
	myStack.Show();
	return 0;
}