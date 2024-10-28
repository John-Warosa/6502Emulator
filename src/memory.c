#include <stdlib.h>
#include "errors.h"
#include "memory.h"


struct Memory6502 *Memory6502_init(void) {
	struct Memory6502 *memory = malloc(sizeof(memory));

	// Program will terminate if alloc failed
	if (memory == nullptr) {
		fatalError(MemoryInitFailed);
	}

	memory->bytes = calloc(0xffff+1, sizeof(u8));

	// Program will terminate if alloc failed
	if (memory->bytes == nullptr) {
		fatalError(MemoryInitFailed);
	}

	return memory;
}
