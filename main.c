#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#include "p_opcodes.c"
#include "tuple.c"
#include "commands.c"

#include <assert.h>

int throw(char* error)
{
	fputs(error, stderr);
	return 1;
}

void simulate_program(tuple_t* program)
{
	for(uint32_t i = 0 ; i < sizeof(program) ; i++)
	{
		assert(COUNT_OPS == 4);
		switch(program[i].op)
		{
			case OP_PUSH:
				break;
			case OP_INC:
				break;
			case OP_DUMP:
				break;
			default: ;
		}
	}
}

void compilate_program(tuple_t* program)
{
	assert(0);
}

int main(int argc, char** argv)
{
	if(argc != 2)
		return throw("No input file ! >:(");
	FILE* in = NULL;
	in = fopen(argv[1], "r");
	if(!in)
		return throw("Read error.");

	tuple_t program[] = {p_push(349), p_push(122), p_inc(), p_dump()};
	simulate_program(program);

	fclose(in);

	return 0;
}
