#include "emulator.h"
#include <stdlib.h>
#include <stdio.h>


struct Emulator *Emulator_init() {
	struct Emulator *emu = malloc(sizeof(*emu));

	if (emu == nullptr) {
		fprintf(stderr, "alloc failed");
		exit(-1);
	}

	emu->cpu = Processor_init();
	emu->mem = Memory_init();
	emu->running = false;

	return emu;
}


void Emulator_free(struct Emulator *emu) {
	Processor_free(emu->cpu);
	Memory_free(emu->mem);

	free(emu);
}
