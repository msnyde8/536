/* call_shellcode.c  */

/*A program that creates a file containing code for launching shell*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

const char code[] =
"\xeb\x21\x5e\x31\xc0\x88\x46\x07\x88\x46\x0a\x89\x76\x0b\x8d\x5e\x08"\
"\x89\x5e\x0f\x89\x46\x13\xb0\x0b\x89\xf3\x8d\x4e\x0b\x8d\x56\x13\xcd"\
"\x80\xe8\xda\xff\xff\xff\x2f\x62\x69\x6e\x2f\x6c\x73\x23\x2d\x61\x23"\
"\x41\x41\x41\x41\x42\x42\x42\x42\x43\x43\x43\x43";

int main(int argc, char **argv)
{
   char buf[sizeof(code)];
   strcpy(buf, code);
   ((void(*)( ))buf)( );
} 