#ifndef ERRORS_H
#define ERRORS_H


enum FatalErrors {
	ProcessorInitFailed,
	MemoryInitFailed,
	EmulatorInitFailed,
};

enum NonFatalErrors {
	temp,
};


[[noreturn]] void fatalError(enum FatalErrors errorCode);


#endif //ERRORS_H
