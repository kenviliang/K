#include "monitor.h"

int main(struct multiboot *mboot_ptr)
{
	monitor_clear();
	monitor_write("hello, i am kos......");
	return 0xDEADBABA;
}
