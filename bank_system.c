#include <stdio.h>
#include <stdlib.h>

char add_user()
{
    /* Function to add users to the file */
    char name; 

    printf("What will be the name on the account: ");
    scanf("%c", &name);

    char usr_info[50] = {};
    usr_info[0] = name;

    return usr_info;
}

void help_menu()
{
    printf("Add a account: 1\n");
    printf("Add a user: 2\n");
    printf("Delete a user: 3\n");
    printf("Deposit funds: 4\n");
    printf("Withdraw funds: 5\n");
    printf("Exit: 6\n");

}

int main(void)
{
    // creates pointer for Bank file
    FILE *ftpr;

    ftpr = fopen("D:\\Programming\\C_C++\\C_code\\prog0\\C_projects\\Bank System\\Bank Data.txt", "r+");

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

            switch (usr_inpt)
            {
            
            // Option to add a new user
            case 1:
                char name[] = {};
                printf("Please enter the name of the Account: ");
                scanf("%c", &name);
                
                int is_valid = 0;

                for (int i = 0; i < strlen(ftpr); i++)
                {
                    if (name == ftpr[i])
                    {
                        is_valid = 1;
                    }
                }
                
                char usr_anccts[] = add_user();
                break;


            default:
                printf("Sorry that is not an option");
                help_menu();
                break;
            }

        }
    }


    return 0;
}