#include "VM.hpp"
#include <iostream>
#include <fstream>

/*
 * Test Environment for custom Stacker VM executions
 * */

int main(int argc, char** argv)
{
	VM* vm=new VM();
	if(argc < 2)
	{
		char bytecode[]="\x0E\x01\x00\x02\x00\x02\x0A";
		vm->interpreter(bytecode,7);
	}else{
		char bytecode[1024];
		char byte;
		int reading=0;
		std::ifstream input;
		input.open(argv[1], std::ios::in | std::ios::binary);
		while(!input.eof())
		{
			input.read(reinterpret_cast<char *>(&byte),sizeof(char));
			bytecode[reading]=byte;
			reading++;
		}
		vm->interpreter(bytecode,7);
	}
	
	return 0;
}
