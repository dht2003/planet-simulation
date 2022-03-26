CXX ?= g++
SRC_DIR = ./src
BUILD_DIR = ./build
BIN_DIR = $(BUILD_DIR)/bin
EXEC_NAME = plant.out
TARGET = $(BIN_DIR)/$(EXEC_NAME)
IPATH = ./include


SRCS := $(shell find $(SRC_DIR) -name *.cpp)
OBJS := $(SRCS:$(SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)
DEPS :=  $(OBJS:.o=.d)

IDIR = $(shell find $(IPATH) -type d)
IFLAGS = $(addprefix -I,$(IDIR))

SDL_FLAGS = -lSDL2main -lSDL2 -lSDL2_image 

CXXFLAGS ?= $(IFLAGS) $(SDL_FLAGS) -Wall -Wextra -pedantic

$(BUILD_DIR)/%.o : $(SRC_DIR)/%.cpp
	@echo "Compiling: $< -> $@"
	$(CXX) $(SDL_FLAGS) $(CXXFLAGS) $(INCLUDES) -MP -MMD -c $< -o $@

$(TARGET) : $(OBJS) 
	@echo "Linking: $(OBJS)"
	$(CXX) $(SDL_FLAGS) $(OBJS) -o $@

-include $(DEPS)

.PHONY: clean
clean:
	@echo "Deleting executable $(TARGET)"
	@$(RM) $(TARGET)
	@echo "Deleting object files : $(OBJS)"
	@$(RM) $(OBJS)
	@echo "Deleting dependency files : $(DEPS)"
	@$(RM) $(DEPS)

.PHONY: dirs
dirs: 
	@echo "Creating build and bin directories"
	@mkdir -p $(BUILD_DIR)
	@mkdir -p $(BIN_DIR)
