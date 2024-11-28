#include "memory.h"
#include <stdlib.h>

#define NUM_BLOCKS 4


/*
 * Defines the memory map for all 4 blocks
 * Every block has 2 values: start index and end index
 *
 * If not all indices are covered by the map , then the 
 * unmapped regions will be unusable
 */
static const uint16_t memoryMap[2*NUM_BLOCKS] = {
	0x0000, 0x1fff		// 8KB for RAM 
	0x2000, 0x2fff		// 1KB for input
	0x3000, 0x7fff		// 20KB for video output (160x128)
	0x8000, 0xffff		// 32KB for ROM
};


struct MemoryBlock *MemoryBlock_init(uint16_t start, uint16_t end) {
	struct MemoryBlock *memBlock = malloc(sizeof(*memBlcok));

	if (memBlock == nullptr) {
		fprintf(stderr, "alloc failed");
		exit(-1);
	}

	memBlock->start = start;
	memBlock->end = end;
	memBlock->size = end - start + 1;
	memBlock->start = start;
}


struct Memory *Memory_init() {
	struct Memory *mem = malloc(sizeof(*mem));

	if (mem == nullptr) {
		fprintf(stderr, "alloc failed");
		exit(-1);
	}

	mem->ram = MemoryBlock_init(memoryMap[0], memoryMap[1]);
	mem->input = MemoryBlock_init(memoryMap[2], memoryMap[3]);
	mem->video = MemoryBlock_init(memoryMap[4], memoryMap[5]);
	mem->rom = MemoryBlock_init(memoryMap[6], memoryMap[7]);

	return mem;
}
