#ifndef EMULATOR_H
#define EMULATOR_H

#include "processor.h"
#include "memory.h"


struct Emulator {
	struct Processor *cpu;
	struct Memory *mem;

	bool running;
}


#endif //EMULATOR_H
