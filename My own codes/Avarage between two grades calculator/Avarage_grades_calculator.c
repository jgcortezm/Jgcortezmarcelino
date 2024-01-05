#include <stdio.h>
#include <stdlib.h>

//avarage between two grades calculator

void main(){
    float a = 0.0, b = 0.0;

    printf("Type the first grade: ");
    scanf("%f", &a);
    printf("The fist grade now listed is: %0.2f\n", a);

    printf("Now, type the second grade: ");
    scanf("%f", &b);
    printf("The second grad now listed is: %0.2f\n", b);

    printf("The avarage between this two grades is: %0.2f\n", (a + b) / 2);



    system("pause");
}

