# Name of the project
PROJECT_NAME = Project

# Output directory
BUILD = build

# All source code files
SRC = main.c\
	src/addstudent.c\
	src/deletestudent.c\
	src/searchstudent.c\
	src/updatepassword.c\
	src/viewstudent.c\

# All test source files
TEST_SRC = testmain.c\
	src/addstudent.c\
	src/deletestudent.c\
	src/searchstudent.c\
	src/updatepassword.c\
	src/viewstudent.c\
test/testmain.c\
unity/unity.c\

TEST_OUTPUT = Test_$(PROJECT_NAME).out

# All include folders with header files
INC	= -Iinc\
-Iunity\

#Library Inlcudes
#if working with CUnit 
#INCLUDE_LIBS = -lcunit
#INCLUDE_LIBS =

# Project Output name
PROJECT_OUTPUT = $(PROJECT_NAME).out

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT)

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).out

# Document the code using Doxygen
#doc:
#	make -C ./documentation

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT)
	./$(TEST_OUTPUT)
#Coverage
coverageCheck:$(BUILD)
	g++ -fprofile-arcs -ftest-coverage -fPIC -O0 $(TEST_SRC) $(INC) -o $(TEST_OUTPUT)
	./$(TEST_OUTPUT)

# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(PROJECT_OUTPUT) $(TEST_OUTPUT) $(DOCUMENTATION_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build
