# Build an executable named ascii_table at ./bin/ from ./src/ascii_table.cpp

CXX := g++
CXXFLAGS := -g -Wall -Wextra
FILENAME := ascii_table

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
