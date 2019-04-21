#ifndef ISR_H
#define ISR_H

#include "common.h"

typedef struct registers 
{
	u32int ds;
	u32int edi, esi, esp, ebx, edx, ecx, eax;
	u32int int_no, err_code;
	u32int eip, cs, eflags, uesresp, ss;
} registers_t;

#endif
