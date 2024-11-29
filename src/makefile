CC = gcc-14

IDIR = ../include
CFLAGS = -I $(IDIR)

ODIR = obj
LDIR = ../lib

LIBS = -lm

_DEPS = emulator.h memory.h	processor.h
DEPS = $(patsubst %, $(IDIR)/%, $(_DEPS))

_OBJ = main.o emulator.o memory.o processor.o
OBJ = $(patsubst %, $(ODIR)/%, $(_OBJ))


$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -std=c23 -Wall -Wpedantic -Wall -c -o $@ $< $(CFLAGS)

6502Emulator: $(OBJ)
	$(CC) -std=c23 -o ../$@ $^ $(CFLAGS) $(LIBS)


.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(IDIR)/*~
