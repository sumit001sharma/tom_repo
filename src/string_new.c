#include <stdio.h>

compare string

void my_strlen(const char *s)

{
   char *p = s;

   while (*p)
      ++p;s

   return (p - s);
}

int main(void)
{
   int i;
   char *s[] = 
   {
      "Git tutorials",
      "Tutorials Point"
   };

   for (i = 0; i < 2; ++i)
      
   printf("string lenght of %s = %d\n", s[i], my_strlen(s[i]));

   return 0;
}

//working on new features...

//new comment

//again added new

//1111234545677