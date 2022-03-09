/**************************************************************************/
/*
  Copyright (C) 20122 Davide Usberti (alias UsboKirishima)

  This file is part of Cryper.

  Cryper is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  Cryper is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with Cryper.  If not, see http://www.gnu.org/licenses/

*/
/**************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
//Normal

#define COLOR_CYAN "\033[36m"
#define COLOR_GREEN "\033[32m"
#define COLOR_RED "\033[31m"
#define COLOR_MAGENTA "\033[35m"
#define COLOR_ORANGE "\033[33m"
#define COLOR_WHITE "\033[37m"
#define COLOR_YELLOW "\033[0;33m"
#define COLOR_BLUE "\033[0;34m"
#define COLOR_PURPLE "\033[0;35m"


//Bold

#define BCOLOR_CYAN "\033[1;36m"
#define BCOLOR_GREEN "\033[1;32m"
#define BCOLOR_RED "\033[1;31m"
#define BCOLOR_MAGENTA "\033[1;35m"
#define BCOLOR_ORANGE "\033[1;33m"
#define BCOLOR_WHITE "\033[1;37m"
#define BCOLOR_YELLOW "\033[1;0;33m"
#define BCOLOR_BLUE "\033[1;0;34m"
#define BCOLOR_PURPLE "\033[1;0;35m"

void PRINT_WELCOME(char *path) 
{
    FILE * ascii = fopen(path, "r");
    char ch;
    printf("%s\n", BCOLOR_BLUE);
    do
    {
        ch = fgetc(ascii);
        putchar(ch);

    } while(ch != EOF);

    fclose(ascii);
}

void PRINT_OPTIONS()
{
    printf("\n");
    printf(BCOLOR_PURPLE);
    printf("What do you do:              \n\n");
    printf("        [01] File encrypter  \n");
    printf("        [02] String encrypter\n");
    printf("        [03] File decrypter  \n");
    printf("        [04] String decrypter\n");
    printf(BCOLOR_WHITE);
    printf("\n");
}

int choose()
{
    int option;
    scanf("%d", &option);
    return option;
}

void exec_command(int command)
{
    switch(command) {
        case 1:
        {

        }
        case 2:
        {

        }
        case 3:
        {

        }
        case 4:
        {

        }
        default:
        {
            printf("%s%d%s", BCOLOR_RED, command, " is not an option.");
            exit(1);
        }
    }
}

int main(int argc, char** argv) {
    //Clear terminal
    system("clear");
    //Print welcome ascii
    PRINT_WELCOME("CONFIGS/WELCOMESCREEN.ascii");
    //Clear ascii in terminal
    sleep(2);
    system("clear");
    //Show program options
    PRINT_OPTIONS();

    int command = choose();
    exec_command(command);
}