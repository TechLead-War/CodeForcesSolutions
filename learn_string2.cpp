#include <stdio.h>
#include <string.h>
int main ()
{
  char ch[] ="Ayush Kapri";
  char * pch;
  pch = strtok (ch," ");
  while (pch != NULL)
  {
    printf ("%s\n",pch);
    pch = strtok (NULL, " ");
  }
  return 0;
}


#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Geeks for Geeks";
    char* token;
    char* rest = str;

    while ((token = strtok_r(rest, " ", &rest)))
        printf("%s\n", token);

    return (0);
} 
