
//converts any number to a string of any base
#include <stdio.h>

char *
baseconv(unsigned int num, int base)
{
	static char retbuf[33];
	char *p;

	if(base < 2 || base > 16)
		return NULL;

	p = &retbuf[sizeof(retbuf)-1];
	*p = '\0';

	do {
		*--p = "0123456789abcdef"[num % base];
		num /= base;
	} while(num != 0);

	return p;
}

int main(void) {
  //char a = "abcd"[0];

  char a = 0["abcd"];

  printf ("%s\n", baseconv(25, 8));

  return 0;
}
