#include <stdio.h>
#include <string.h>

int bof() {
	char buffer[8];
	strcpy(buffer, "AAAAAAAAA");
	return 1;
}

int main() {
	bof();
	printf("end\n");
	return 1;
}
