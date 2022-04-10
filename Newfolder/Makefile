# Name of the project
PROJECT_NAME = Smar_Switch
TEST_PROJ_NAME = Test_$(PROJECT_NAME)

# Output directory
BUILD = build

# Source path 
VPATH = SRC INCLUDE 
 
# All source code files
SRC = main.cpp\
src/control_switch.cpp\
src/smart_switch.cpp\
src/appliance.cpp

# All test source files
TEST_SRC = src/control_switch.cpp\
src/smart_switch.cpp\
test/test_control_switch.cpp\
test/test_smart_switch.cpp\
test/test_appliance.cpp\

# test/test_all.cpp\
# unity/unity.c\


TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

# All include folders with header files
INC	= -Iinc\
 -Iunity\

#Library Inlcudes
INCLUDE_LIBS = 
INCLUDE_LIBS = -lcunit

# Project Output name
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built sudo cp *.a /usr/lib
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	g++ $(SRC) $(INC) -o $(PROJECT_OUTPUT)

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT)

runtest:$(PROJECT_NAME)
	./$(TEST_OUTPUT)


# Document the code using Doxygen
doc:
	make -C ./documentation

# Build and run the unit tests
test:$(BUILD)
	g++ $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) -lgtest -lgtest_main -lpthread


analyze: test memcheck staticcheck coverage sanitize_check

staticcheck:
	cpp check --enable = all -Iunity.

memcheck:
	valgrind ./$(TEST_OUTPUT)

sanitize_check:
	g++ -fsanitize=address -fno-omit-frame-pointer $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT)

coverage:$(TEST_SRC)
	g++ -fprofile-arcs -ftest-coverage $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT)
	gcov -a calender.c

# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT) *.gcda *.gcno *.gcov

# Create new build folder if not present
$(BUILD):
	mkdir build
