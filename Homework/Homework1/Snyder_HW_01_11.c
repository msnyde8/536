#include <string.h>
#include <stdio.h>

int bof() {
	char buffer[8];
	strcpy(buffer, "AAAAAAAAAAAA");
	return 1;
}

int main() {
	bof();
	printf("end\n");
	return 1;
}
