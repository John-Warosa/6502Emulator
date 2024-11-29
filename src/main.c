#include "emulator.h"
//#include "../test/debugprint.h"


int main() {
	auto emu = Emulator_init();

	//debuprint(emu);
	
	Emulator_free(emu);

	return 0;
}
