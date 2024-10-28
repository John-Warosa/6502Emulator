#include <stdlib.h>
#include <string.h>
#include "memory.h"


void printMemoryPage(struct Memory6502 *memory, u8 memoryPageIndex) {
	u8 *memoryPage = getMemoryPage(memory, memoryPageIndex);
	u8 *printableMemoryPage = malloc((0xff+1) * sizeof(u8));
	
	memcpy(printableMemoryPage, memoryPage, memoryPageIndex);

	for (int i = 0; i < 0xff+1; ++i) {
		printf("%2x ", printableMemoryPage[i]);
	}

	free(memoryPage);
}
