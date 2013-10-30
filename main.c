// main.c -- Defines the C-code kernel entry point, calls initialisation routines.
// Made for JamesM's tutorials 
#include "monitor.h"
#include "descriptor_tables.h"
#include "timer.h"
#include "paging.h"

int main(struct multiboot *mboot_ptr)
{
  // All our initialisation calls will go in here.
// Initialise all the ISRs and segmentation
        init_descriptor_tables();

	monitor_clear();
	monitor_write("Hello, world!,this is a test\n");  
	char *s = "this is another test*\n";
	monitor_write(s);
//	asm volatile ("int $0x3");
//	asm volatile ("int $0x4");
//	asm volatile("sti");
//	init_timer(50); 
	initialise_paging();
	monitor_write("testing paging world");
	u32int *ptr = (u32int*)0xA0000000;
  	u32int do_page_fault = *ptr;
  	return 0;

