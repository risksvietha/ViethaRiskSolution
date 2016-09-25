#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char command[50];

   //strcpy( command,"msfconsole " ); //msfweb.bat
   //strcpy( command,"nmap" );
   // system(command);

   strcpy(command, "echo > /in.txt");
   system(command);


   //delay (50);

  //strcpy( command,"db_nmap -v -sV yahoo.com " );
  strcpy( command," nmap -v -sV scanme.nmap.org" );
    system(command);

    strcpy(command, "exit");
    system(command);

    strcpy(command,"msfconsole");
    system(command);
   //return 0;


}

