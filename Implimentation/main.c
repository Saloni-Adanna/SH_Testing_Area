#include<stdio.h>
#include "square.h"
#include "circle.h"
#include "test_area.h"

int main(){

 int choice;
 float catch, r;

 test_main();

    printf("\n enter the below choice to find the area \n");
    printf("\n 1. Square   2. Circle \n");
    scanf("%d", &choice);

    switch(choice){

        case 1: printf(" Enter the radius of the circle");
                scanf("%f", &r);

                catch = circle(r);

                printf("The area is %f",catch);
                break;

        case 2: printf(" Enter the side of the square");
                scanf("%f", &r);

                catch = square(r);

                printf ("\n The area is %f", catch);
                break;
        default:printf("\n Nothing to Show");
                break; 
    }

    return 0;
}