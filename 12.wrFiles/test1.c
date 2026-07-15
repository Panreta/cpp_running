#include <stdio.h>
 
int main()// use cat /tmp/test.txt to see the output
{
   FILE *fp = NULL;// notice it should be a pointer
 
   fp = fopen("/tmp/test.txt", "w+");
   fprintf(fp, "This is testing for fprintf...\n");//print to any stream, now is fp
   fputs("This is testing for fputs...\n", fp);
   fclose(fp);
}