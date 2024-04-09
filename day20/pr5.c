#include <stdio.h>
#include <string.h>
void main() {
   char s[100],d[100],full[100];

   gets(s);
   gets(d);
   
   strcpy(full,strcat(s,d));
   puts(full);
   
   
}
