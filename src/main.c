#include "monitor.h"
#include "descriptor_tables.h"
#include "timer.h"
#include "page.h"

int main(struct multiboot *mboot_ptr)
{
	init_descriptor_tables();
	monitor_clear();

	initialise_page();
	monitor_write("\n Starting paging......\n");
	monitor_write("hello, i am kos......\n");
/*
	monitor_put('\n');
	asm volatile("int $0x3");
	asm volatile("int $0x4");
*/
	u32int *ptr = (u32int*) 0xA0000000;
	u32int do_page_fault = *ptr;

	//init_timer(60);
	return 0xDEADBABA;
}
