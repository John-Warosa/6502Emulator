#ifndef PROCESSOR_H
#define PROCESSOR_H

#include "myint.h"


struct Status6502 {
	unsigned int sign		: 1;
	unsigned int overflow	: 1;
	unsigned int unused		: 1;
	unsigned int softBreak	: 1;
	unsigned int decimal	: 1;
	unsigned int interrupt	: 1;
	unsigned int zero		: 1;
	unsigned int carry		: 1;
};

struct Processor6502 {
	u16 programCounter;
	u8 stackPointer;

	u8 accumulator;
	u8 xRegister;
	u8 yRegister;

	struct Status6502 statusFlags;
};


struct Processor6502 *Processor6502_init(void);


#endif //PROCESSOR_H
