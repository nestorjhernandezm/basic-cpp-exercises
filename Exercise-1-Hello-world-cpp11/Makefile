# Build an executable named hello_world at ./bin/ from ./src/hello_world.cpp

CXX := g++
CXXFLAGS := -g -Wall
FILENAME := hello_world

INPUTFOLDER := ./src
INPUT := $(INPUTFOLDER)/$(FILENAME).cpp
OUTPUTFOLDER := ./bin
OUTPUT := $(OUTPUTFOLDER)/$(FILENAME)

RM := rm -rf

all: $(OUTPUTFOLDER)
	$(CXX) $(CXXFLAGS) -o $(OUTPUT) $(INPUT)

$(OUTPUTFOLDER):
	@mkdir -p $@

clean:
	$(RM) $(OUTPUTFOLDER)
