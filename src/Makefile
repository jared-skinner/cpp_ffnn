DEBUG_DIR   = ../debug/bin
RELEASE_DIR = ../release/bin

DEBUG_TARGET   = $(DEBUG_DIR)/ffnn
RELEASE_TARGET = $(RELEASE_DIR)/ffnn

INCDIR=-I./include

CPPFLAGS = -Wall $(INCDIR)


OBJECTS = ffnn.o \
		  node.o \
		  graph.o \
		  computation.o \

# put debug as all since this is what will be compiling most of the time
all:     $(DEBUG_TARGET)

debug:   $(DEBUG_TARGET)
release: $(RELEASE_TARGET)

$(DEBUG_TARGET) : $(OBJECTS)
	g++ $(OBJECTS) -o $(DEBUG_TARGET) -lm -g

$(RELEASE_TARGET) : $(OBJECTS)
	g++ $(OBJECTS) -o $(RELEASE_TARGET) -lm

clean:
	rm -f $(DEBUG_TARGET) $(RELEASE_TARGET) $(OBJECTS)
