#include "processor.h"
#include <stdlib.h>


struct Processor *Processor_init() {
	struct Processor *cpu = malloc(sizeof(*cpu));

	if (cpu == nullptr) {
		fprintf(stderr, "alloc failed");
		exit(-1);
	}

	// registers
	cpu->accumulator = 0x00;
	cpu->xRegister = 0x00;
	cpu->yRegister = 0x00;
	
	// status flags
	cpu->statsFlags = {
		.unused = 1
	}

	return cpu;
}
