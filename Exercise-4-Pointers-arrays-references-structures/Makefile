# Build an executable named pointer_basics at ./bin/ from
# ./src/pointer_basics.cpp

CXX := g++
CXXFLAGS := -g -Wall -Wextra
FILENAME := pointer_basics

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
