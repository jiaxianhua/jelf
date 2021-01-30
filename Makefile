TARGET := jelf
SRCS   := $(wildcard *.c)

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CC) -o $@ $^

.PHONY: all clean

clean:
	echo $(SRCS)
	$(RM) $(TARGET)
