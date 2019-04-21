#include "monitor.h"
#include "descriptor_tables.h"

int main(struct multiboot *mboot_ptr)
{
	monitor_clear();
	monitor_write("hello, i am kos......");

	monitor_put('\n');
	asm volatile("int $0x3");
	asm volatile("int $0x4");
	return 0xDEADBABA;
}
