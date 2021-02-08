# Name of the project
PROJECT_NAME = area 

# Output directory
BUILD = build

# All source code files
SRC = unity/unity.c\
test/test_area.c\
src/square.c \
src/circle.c main.c 

INC = -Iinc\
-Iunity\
-Itest

# Project Output name
#PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME)

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC)-o $(PROJECT_NAME)/area.out

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(BUILD)/area.out

# Document the code using Doxygen
doc:
	make -C ./documentation
	
# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build

