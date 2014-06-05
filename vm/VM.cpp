#include "VM.hpp"
#include <iostream>
#include <cstdlib>

VM::VM() : stackSize(0)
{
	std::cout << "Starting Stacker VM" << std::endl;
}
VM::~VM()
{
	
}
void VM::execute(char bytecode[],int pos)
{
	char instruction=bytecode[pos];
	switch(instruction)
	{
		case INTEGER:
			push(bytecode[++pos]);
			break;
		case ADD:{
			int b=pop();
			int a=pop();
			push(a+b);
			break;}
		case SHOW_INTEGER:
			std::cout << "INTEGER VALUE: " << pop() << std::endl;
			break;
		case SHOW_VERSION:
			std::cout << "Stacker VM 0.0.1" << std::endl;
			break;
		case EXIT_VM:
			std::exit(0);
	}
}
void VM::interpreter(char bytecode[], int size)
{
	for(int i=0;i<size;i++)
	{
		execute(bytecode,i);
	}
}
void VM::push(int value)
{
	if(stackSize > MAX_STACK)
	{
		std::cout << "STACK ERROR" << std::endl;
		std::exit(0);
	}
	stack[stackSize++] = value;
}
int VM::pop()
{
	if(stackSize < 0)
	{
		std::cout << "STACK ERROR" << std::endl;
		std::exit(0);
	}
	return stack[--stackSize];
}
