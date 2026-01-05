#include<stdio.h>
#include "sll.h"
#include "dll.h"
#include "array.h"
#include "circular_queue.h"
#include "bst.h"


void data_structures_demo(void){
        int choice;
start:          printf("\nenter 1 for standard linear data structures"
                "\nenter 2 for circular variants of linear data structures"
                "\nenter 3 for non-linear data structures"
                "\nenter choice : "
        );
        scanf("%d",&choice);

        if(choice<1 || choice>3){
            printf("\nselect only from 1,2 and 3");
            goto start;
        }

        switch(choice){
            case 1:
                while(1){
                    printf("\nenter 1 for singly linked list demo"
                        "\nenter 2 for doubly linked list demo"
                        "\nenter 3 for arrays demo"
                        "\nenter choice : "
                    );

                    scanf("%d",&choice);
                    if(choice<1 || choice>3){
                        printf("\nselect only from 1,2 and 3");
                        continue;
                    }

                    if(choice==1){
                        sll_Demo();
                        break;
                    }
                    
                    if(choice==2){
                        dll_demo();
                        break;
                    }


                    if(choice==3){
                        array_demo();
                        break;
                    }

                }

                break;

            case 2:
                while(1){
                    printf("\nenter 1 for circular queue demo :- ");
                    scanf("%d",&choice);

                    if(choice!=1){
                        printf("\nonly enter from the given menu");
                        continue;
                    }

                    circular_queue_Demo();
                    break;
                }

                break;


            case 3:
                while(1){
                    printf("\nenter 1 for binary search tree demo :- ");
                    scanf("%d",&choice);

                    if(choice!=1){
                        printf("\nenter only from the given menu");
                        continue;
                    }

                    binary_search_tree_Demo();
                    break;
                }

                break;

        }   
    }      
