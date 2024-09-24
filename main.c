#include <stdio.h>
#include <stdlib.h>

int main()
{

char nom [16],prenom [20],sex[10],email[30],les_informations_personelles[50];
int age;
printf ("enter your name ",nom);
scanf ("%s",nom);
printf ("enter your prenom ");
scanf("%s",prenom);
printf("enter your age");
scanf("%d",&age);
printf("enter your email");
scanf("%s",email);
printf("enter your sex");
scanf("%s",sex);

printf("%s",nom);
    return 0;
}
