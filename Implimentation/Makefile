# Output directory
BUILD = build

PROJECT_NAME = area

SRC = unity/unity.c\
test/test_area.c\
src/square.c \
src/circle.c main.c 

INC = -Iinc\
-Iunity\
-Itest

PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

all :$(SRC) $(BUILD)
	gcc $(SRC) $(INC)-o $(PROJECT_OUTPUT).out

run :$(PROJECT_NAME)
		./${PROJECT_NAME}
		
doc: make -C documentation


clean: rm -rf $(PROJECT_NAME) documentation/html

# Create new build folder if not present
$(BUILD):
	mkdir build
	

