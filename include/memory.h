#ifndef MEMORY_H
#define MEMORY_H

#include "myint.h"


struct Memory6502 {
	u8 *bytes;
};


struct Memory6502 *Memory6502_init(void);

u8 *getMemoryPage(u8 memoryPageIndex);

#endif //MEMORY_H
