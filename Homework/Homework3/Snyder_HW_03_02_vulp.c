/*  vulp.c  */
#include <stdio.h>
#include <string.h>                                                                     // <--
#include <unistd.h>
#define DELAY 400000000                                                 // <--

int main() {
        char * fn = "/tmp/XYZ";
        char buffer[300];                                                               // <--
  FILE *fp;
        long int i;
  /* get user input */
  scanf("%300s", buffer );                                      // <--

  if ( !access(fn, W_OK) ) {
                /*simulating the delay */
                // Write your code to play with DELAY // <--
                // to waste some seconds here                             // <--
                //                                                                                                                                    // <--

        fp = fopen(fn, "a+");
    fwrite("\n", sizeof(char), 1, fp);
    fwrite(buffer, sizeof(char), strlen(buffer), fp);
    fclose(fp);
  }
  else printf("No permission \n");

        return 1;                                                                                                       // <--
}
