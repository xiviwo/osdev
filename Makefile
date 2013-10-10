
SOURCES=boot.o main.o
CFLAGS=-m32 -nostdlib -nostdinc -fno-builtin -fno-stack-protector
all : $(SOURCES) link
boot.o : 
	as -32 -o  boot.o boot.s  
link:
	ld -Tlink.ld -m elf_i386 -o kernel $(SOURCES)
clean :
	-rm *.o kernel



