#ifndef COMMANDS_C_
#define COMMANDS_C_

#include "tuple.c"
#include "p_opcodes.c"

tuple_t p_push(int n)
{
	return (tuple_t) {OP_PUSH, n};
}

tuple_t p_inc()
{
	return (tuple_t) {OP_INC, 0};
}

tuple_t p_dump()
{
	return (tuple_t) {OP_DUMP, 0};
}

#endif
