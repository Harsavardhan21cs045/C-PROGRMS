#include<stdio.h>
#include<string.h>

void main()

// {
  
//    char username[ 90];
//    char usernamedb[] = {"harsa"};
//    printf("enter username:");
//    scanf("%s",&username);
//    char password[50];
//    char passworddb[] = "harsa123";
//    printf("enter password:");
//    scanf("%s",&password);
//    if((strcmp(username,usernamedb)==0) && (strcmp(password,passworddb)==0))
//    {
//     printf("logged in successfully");
//    }
//    else
//    {
//     printf("invalid login credentials");
//    }

// }
// {
//  char username[20];
//  printf("enter the name:");
//  scanf("%[\n]",&username);
//  printf("username length = %d");
 
// }

    {
        

    int times = 3;
    while (times != 0)
    {
        printf("enter the password:");
        char pass[20];
        scanf("%s", pass);
        char size = strlen(pass);
        int hasUpperCase, hasLowerCase, hasDigit, hasSpecialChar, isSpecialCharacter;
        if (size >= 8)
        {
            for (int i = 0; i < size; i++)
            {
                if (isupper(pass[i]))
                {
                    hasUpperCase = 1;
                }
                else if (islower(pass[i]))
                {
                    hasLowerCase = 1;
                }
                else if (isdigit(pass[i]))
                {
                    hasDigit = 1;
                }
                else if (ispunch(pass[i]))
                {
                    hasSpecialChar = 1;
                }
            }
        }
        else
        {
            printf("enter above 8 char\n");
        }

        if (hasUpperCase && hasLowerCase && hasDigit && hasSpecialChar)
        {
            printf("crct password\n");
            break;
        }
        else
        {
            printf("enter atleast one uppercase and lowercase and special charater\n");
        }
        times--;
        printf("try ine more time...:\n");
    }
    printf("bye bye try again...;");
}
    
   







