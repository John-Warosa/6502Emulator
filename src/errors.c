#include <stdlib.h>
#include <stdio.h>
#include "errors.h"


void fatalError(enum FatalErrors errorCode) {
	char *errorMessage;

	switch (errorCode) {
		case ProcessorInitFailed:
			errorMessage = "A fatal Error occurred while initialising the processor.\n"
						   "The Emulator could not start and was terminated.\n";
			break;
		case MemoryInitFailed:
			errorMessage = "";
			break;
		default:
			errorMessage = "A fatal Error occured. Process was terminated.\n";
	}

	fprintf(stderr, "%s", errorMessage);
	exit(-1);
}
