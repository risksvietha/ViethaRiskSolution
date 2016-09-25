#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char command[50];


   strcpy( command,"db_nmap -v -sV yahoo.com " );
   system(command);
   return 0;

}
