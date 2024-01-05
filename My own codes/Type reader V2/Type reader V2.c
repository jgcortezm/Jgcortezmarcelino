#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void main(){

    printf("Hello my frind, let me ask you some questions, ok? \n");

    int a = 0;
    printf("\nType an random integer number:\n");
    scanf("%d", &a);
    printf("You typed the  integer number %d\n", a);

    float b = 0.0;
    printf("\nNow, type an float number:\n");
    scanf("%f", &b);
    printf("You typed the  float number:%0.1f\n", b);

    char c = 'A';
    printf("\nAnd to finish, type one single letter:\n");
    fflush(stdin);
    scanf("%c", &c);
    printf("You typed the letter:%c\n", c);

    printf("\nthanks for you answers and good bye :D ");
    scanf("%d", &a);


}
