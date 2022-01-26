#include <stdio.h>
#include <stdlib.h>
typedef unsigned char bool;
static const bool TRUE = 1;
static const bool FALSE = 0;

bool no_name(FILE *file_name, char name)
{
    /*Iterates through file and checks if name already exists */

    char buff[255];

    while(fgets(buff, 255, file_name) != NULL)
    {
    }
}

void help_menu()
{
    /* help menu */
    printf("Add a user: 1\n");
    printf("Add a account: 2\n");
    printf("Delete a user: 3\n");
    printf("Deposit funds: 4\n");
    printf("Withdraw funds: 5\n");
    printf("Exit: 6\n\n");

}

int main(void)
{
    // creates pointer for Bank file and an array for user input
    FILE *ftpr;
    char name[255];

    ftpr = fopen("D:\\Programming\\C_C++\\C_code\\C_projects\\Bank System\\Bank Data.txt", "r+");

    // checks to see if file exists
    if (ftpr == NULL)
    {
        printf("ERROR: FILE DOES NOT EXIST");
        exit(1);
    }

    // if file exists 
    else
    {
        int usr_inpt;

        while (usr_inpt != 6)
        {
            printf("What would you like to do?\n");
            scanf("%i", &usr_inpt);
            
            // Option to add a new user
            if (usr_inpt == 1)
            {
                    printf("What is your name:");
                    scanf("%s", &name);
                    fprintf(ftpr, "%s\n", name);
                    printf("Done\n\n");
            }

            else if(usr_inpt == 2)
            {
                //add an account
            }

            else if(usr_inpt == 3)
            {
                // remove user
            }

            else if(usr_inpt == 4)
            {
                // deposit funds
            }

            else if(usr_inpt == 5)
            {
                // withdraw funds
            }

            // exit option
            else if(usr_inpt == 6)
            {
                break;
            }
            
            // default response
            else
            {
                    printf("Sorry that is not an option\n");
                    help_menu();
            }
            
        }
    }

    fclose(ftpr);

    return 0;
}