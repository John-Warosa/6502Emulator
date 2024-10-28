#include <stdlib.h>
#include "processor.h"
#include "errors.h"


static struct Status6502 StatusFlags_init(void) {
	struct Status6502 statusFlags = {
		.sign = 0,
		.overflow = 0,
		.unused = 1,
		.softBreak = 1,
		.decimal = 0,
		.interrupt = 0,
		.zero = 0,
		.carry = 0,
	};

	return statusFlags;
};


struct Processor6502 *Processor6502_init(void) {
	struct Processor6502 *cpu = malloc(sizeof(cpu));

	// fatalError exits program
	if (cpu == nullptr) {
		fatalError(ProcessorInitFailed);
	}

	cpu->programCounter = 0; //getVals(0xfffc, 0xfffd); // TODO: add real function
	cpu->stackPointer = 0xff;

	cpu->accumulator = 0x00;
	cpu->xRegister = 0x00;
	cpu->yRegister = 0x00;

	cpu->statusFlags = StatusFlags_init();

	return cpu;
};
