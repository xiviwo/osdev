

void write2(char *str, int len) {
    __asm__ volatile ("int $0x80"
        :: "a" (4), "b" (1), "c" (str), "d" (len));
}

void main(void)
{
	write2("this is a test", 10);
}
