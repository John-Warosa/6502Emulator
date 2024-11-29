#include "processor.h"
#include <stdlib.h>
#include <stdio.h>


struct Processor *Processor_init() {
	struct Processor *cpu = calloc(1, sizeof(*cpu));

	if (cpu == nullptr) {
		fprintf(stderr, "alloc failed");
		exit(-1);
	}

	// status flags
	cpu->statusFlags.unused = 1;

	return cpu;
}


void Processor_free(struct Processor *cpu) {
	free(cpu);
}
