#include<stdio.h>

int main()
{
    char word;
    printf("Enter you word : ");
    scanf("%c", &word);

    switch(word){

case 'A' :
   {
       printf("Vawel.");
       break;
   }
    case 'E':
   {
       printf("Vawel.");
       break;
   }

    case 'I' :
   {
       printf("Vawel.");
       break;
   }

    case 'O' :
   {
       printf("Vawel.");
       break;
   }

    case 'U' :
   {
       printf("Vawel.");
       break;
   }

    default :
        {
            printf("Consonant.");
        }

    }


    return 0;
}
