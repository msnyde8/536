#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	int numPad = 0xbabe;
	char tmpBuf[1024];
	strncpy(tmpBuf, argv[1], sizeof(tmpBuf) - 1);
	printf(tmpBuf);
	return 0;
}
