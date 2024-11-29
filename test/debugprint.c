#include "debugtools.h"


void debug_print_all(struct Emulator *emu) {
	struct Processor *cpu = emu->cpu;
	struct Memory *mem = emu->mem;

	printf("Emulator info:\n"
		   "Emulator at: %p\n", emu);
	printf("Emulator running: %d\n\n", emu->running);

	printf("Processor info:\n"
		   "Processor at: %p\n", cpu);
	printf("Accumulator set to: %u\n", cpu->accumulator);
	printf("X register set to: %u\n", cpu->xRegister);
	printf("Y register set to: %u\n", cpu->yRegister);
	printf("Stack Pointer set to: %u\n", cpu->stackPointer);
	printf("Program counter set to: %u\n\n", cpu->proramCounter);

	printf("Status flags:\n");
	printf("Carry set to: %u\n", cpu->statusflags.carry);
	printf("Zero set to: %u\n", cpu->statusFlags.zero);
	printf("Interrupt set to: %u\n", cpu->statusFlags.interrupt);
	printf("Decimal set to: %u\n", cpu->statusFlags.decimal);
	printf("Break set to: %u\n", cpu->statusFlags.breaks);
	printf("Unused set to: %u\n", cpu->statusFlags.unused);
	printf("Overflow set to: %u\n", cpu->statusFlags.overflow);
	printf("Negative set to: %u\n", cpu->statusFlags.negative);
}


void debug_print_values(struct Emulator *emu) {

}


void debug_print_memory(struct Emulator *emu) {

}
