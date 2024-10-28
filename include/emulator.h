#ifndef EMULATOR_H
#define EMULATOR_H

#include <stdio.h>
#include "processor.h"
#include "memory.h"


struct Emulator6502 {
	struct Processor6502 *processor;
	struct Memory6502 *memory;
	FILE *asmFile;
};


struct Emulator6502 *Emulator6502_init(FILE *asmFile);


#endif //EMULATOR_H
