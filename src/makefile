CC = gcc-14

IDIR = ../include
CFLAGS = -I $(IDIR)

ODIR = obj
LDIR = ../lib

LIBS = -lm

_DEPS = emulator.h errors.h instructions.h memory.h	myint.h processor.h
DEPS = $(patsubst %, $(IDIR)/%, $(_DEPS))

_OBJ = main.o emulator.o errors.o instructions.o memory.o processor.o
OBJ = $(patsubst %, $(ODIR)/%, $(_OBJ))


$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -std=c23 -c -o $@ $< $(CFLAGS)

6502Emulator: $(OBJ)
	$(CC) -std=c23 -o ../$@ $^ $(CFLAGS) $(LIBS)


.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(IDIR)/*~
