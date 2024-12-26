# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -O2 -std=c++17

# Directories
BUILD_DIR = build
BIN_DIR = bin

# Target executable
TARGET = $(BIN_DIR)/app

# Source and header files
SRC_FILES = basic/src/basic.cpp basic/src/main.cpp OOP/src/Car.cpp OOP/src/Integer.cpp OOP/src/Number.cpp
OBJ_FILES = $(SRC_FILES:.cpp=.o)

# Include directories
INC_DIRS = basic/inc OOP/inc
INC_FLAGS = $(addprefix -I, $(INC_DIRS))

# Default target
all: $(TARGET)

# Link object files to create the final executable
$(TARGET): $(OBJ_FILES) | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $(INC_FLAGS) -o $@ $^

# Compile source files into object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INC_FLAGS) -c $< -o $@

# Create bin directory if it doesn't exist
$(BIN_DIR):
	mkdir -p $(BIN_DIR)

# Clean up build and binary files
clean:
	rm -rf $(OBJ_FILES) $(TARGET)

# Phony targets
.PHONY: all clean
