#include<stdio.h>
#include "expression.h"

void expression_evaluation_demo(void){
    while(1){
        int choice;
        printf("\nenter 1 for infix to postfix conversion"
            "\nenter 2 for postfix evaluation");
        scanf("%d",&choice);

        if(choice<1 || choice>2){
            printf("\nenter only from the given menu");
            continue;
        }

        if(choice==1){
            infix_to_postfix_Demo();

            printf("\nenter any number to test again or '-1' to exit");
            scanf("%d",&choice);
            if(choice==-1)  break;
            continue;
        }
        else if(choice==2){
            postfix_evaluation_Demo();
            printf("\nenter any number to test again or '-1' to exit");

            scanf("%d",&choice);
            if(choice==-1)  break;
            continue;
        }
    }



}