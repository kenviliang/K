SOURCES = boot.o main.o common.o monitor.o descriptor_tables.o gdt.o interrupt.o isr.o timer.o kheap.o page.o

CFLAGS = -m32 -nostdlib -nostdinc -fno-builtin -fno-stack-protector
LDFLAGS = -Tlink.ld
ASFLAGS = -f elf32

all: $(SOURCES) link

clean: 
	-rm *.o kernel
link:
	ld -m elf_i386 $(LDFLAGS) -o kernel $(SOURCES)

.s.o:
	nasm $(ASFLAGS) $<
