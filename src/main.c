#include "emulator.h"
//#include "../test/debugprint.h"


int main() {
	struct Emulator *emu = Emulator_init();
	emu = nullptr;

	//debuprint(emu);
	
	Emulator_free(emu);

	return 0;
}
