CC        = g++

CFLAGS    = -I/usr/local/include
CPPFLAGS  = -I/usr/local/include
LFLAGS    =
CONFIG    = debug
BUILD_DIR = ./Build/$(CONFIG)
#TARGET    = $(BUILD_DIR)/Execute
#TARGET    = chap7.cpp

OBJECT = chap7.o
SRCS = $(OBJECT:.o=.c)

$(OBJECT) : chap7.cpp
	g++ -g -o chap7 chap7.cpp

#chap7 : $(OBJECT)
#	$(CC) -o t $(OBJECT)

clean:
	rm -f $(OBJECT) $(TARGET)
