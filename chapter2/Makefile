CC=gcc
CFLAGS=-Wall -Wextra -ggdb
SRC_DIR= ./
OUT_DIR= out/

C_FILES= $(wildcard $(SRC_DIR)/*.c)
EXECUTABLES= $(patsubst $(SRC_DIR)/%.c,$(OUT_DIR)/%,$(C_FILES))

all: $(EXECUTABLES)

$(OUT_DIR)/%: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -o $@ $<

clean: 
	rm -rf ./out/*