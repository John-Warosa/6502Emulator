#ifndef PROCESSOR_H
#define PROCESSOR_H

#include <stdint.h>


struct Processor {
	// registers
	uint8_t accumulator;
	uint8_t xRegister;
	uint8_t yRegister;
	
	// memory pointers
	uint8_t stackPointer;
	uint16_t programCounter;

	// status flags
	struct {
		unsigned int carry		:	1;
		unsigned int zero		:	1;
		unsigned int interrupt	:	1;
		unsigned int decimal	:	1;
		unsigned int break		:	1;
		unsigned int unused		:	1;
		unsigned int overflow	:	1;
		unsigned int negative	:	1;
	} statusFlags;
};


struct Processor *Processor_init();


void Processor_start(struct Processor cpu);


#endif //PROCESSOR_H
