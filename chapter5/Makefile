CC=gcc
CFLAGS=-Wall -Wextra -ggdb
SRC_DIR=.
OUT_DIR=out

C_FILES=$(filter-out $(SRC_DIR)/Lib.c, $(wildcard $(SRC_DIR)/*.c))

OBJ_FILES=$(patsubst $(SRC_DIR)/%.c,$(OUT_DIR)/%.o,$(C_FILES))
EXECUTABLES=$(patsubst $(SRC_DIR)/%.c,$(OUT_DIR)/%,$(C_FILES))

all: $(EXECUTABLES)

$(OUT_DIR)/%.o: $(SRC_DIR)/%.c Lib.h
	$(CC) $(CFLAGS) -c $< -o $@

$(OUT_DIR)/%: $(OUT_DIR)/%.o Lib.o
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -rf $(OUT_DIR)/*

