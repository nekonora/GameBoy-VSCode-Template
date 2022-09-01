export GBDK=/opt/gbdk
LCC = $(GBDK)/bin/lcc
FLAGS := -Wa-l -Wl-m -Wl-j 
TARGET := $(CURDIR)/game
SOURCE := $(CURDIR)/src
BIN := $(CURDIR)/bin

all:
	$(LCC) $(FLAGS) -c -o $(BIN)/main.o $(SOURCE)/main.c
	$(LCC) $(FLAGS) -o $(TARGET)/#{title}.gb $(BIN)/main.o
	@echo "Game #{title} exported succesfully!"