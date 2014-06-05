#ifndef VM_HPP
#define VM_HPP

enum Instruction{
	INTEGER = 0x00,
	STRING = 0x01,
	ADD = 0x02,
	SHOW_INTEGER = 0x0A,
	SHOW_VERSION = 0x0E,
	EXIT_VM = 0x0F
};

class VM{
	public:
		VM();
		~VM();
		void interpreter(char bytecode[], int size);
	private:
		static const int MAX_STACK=256;
		int stackSize;
		int stack[MAX_STACK];
		void push(int value);
		int pop();
		void execute(char bytecode[],int pos);
	
};

#endif
