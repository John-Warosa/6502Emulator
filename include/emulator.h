#ifndef EMULATOR_H
#define EMULATOR_H

#include "processor.h"
#include "memory.h"


struct Emulator {
	struct Processor *cpu;
	struct Memory *mem;

	bool running;
};


struct Emulator *Emulator_init();

void Emulator_free(struct Emulator *emu);


#endif //EMULATOR_H
