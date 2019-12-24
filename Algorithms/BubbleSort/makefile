# Author: Ammar Shahin
# Date: 1:11:2019

CC = gcc
CFLAGS = -I$(IDIR)

IDIR = ./inc
ODIR = ./obj
LDIR = ./lib
LSRC = ./src

LIBS = -lm

#change here ########
_DEPS = BubbleSort.h Typedefs.h
#####################

DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

#change here ########
_OBJ = main.o BubbleSort.o
#####################

OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


############ Rules ################
$(ODIR)/%.o: $(LSRC)/%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

app: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(IDIR)/*~