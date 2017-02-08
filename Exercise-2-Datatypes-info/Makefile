# Build an executable named hello_world at ./bin/ from
# ./src/data_types_info.cpp

CXX := g++
CXXFLAGS := -g -Wall -Wextra
FILENAME := data_types_info

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
