//Fuck pragma once, all my homies use include guards

#ifndef TUPLE_C_
#define TUPLE_C_

struct tuple {
	uint8_t op;
	int val;
};

typedef struct tuple tuple_t;

#endif
