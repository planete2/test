CC=gcc

TARGET_SRC:=a.c 
TARGET_OBJ:=a.o 

main: $(TARGET_OBJ)
	$(CC) -o $@ $<
	rm $(TARGET_OBJ)