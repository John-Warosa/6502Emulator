#include <stdlib.h>
#include "errors.h"
#include "emulator.h"


struct Emulator6502 *Emulator6502_init(FILE *asmFile) {
	struct Emulator6502 *emulator = malloc(sizeof(emulator));

	// Program terminates if alloc failed
	if (emulator == nullptr) {
		fatalError(EmulatorInitFailed);
	}

	emulator->processor = Processor6502_init();
	emulator->memory = Memory6502_init();
	emulator->asmFile = asmFile;

	return emulator;
}
