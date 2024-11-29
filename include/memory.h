#ifndef MEMORY_H
#define MEMORY_H

#include <stdint.h>


struct MemoryBlock {
	uint16_t start;
	uint16_t end;
	uint16_t size;

	uint8_t *memory;
};


struct Memory {
	struct MemoryBlock *ram;
	struct MemoryBlock *input;
	struct MemoryBlock *video;
	struct MemoryBlock *rom;
};


struct MemoryBlock *MemoryBlock_init(uint16_t start, uint16_t end);

struct Memory *Memory_init();

void Memory_free(struct Memory *mem);


#endif //MEMORY_H
