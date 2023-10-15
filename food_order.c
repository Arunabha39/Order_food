#include<stdio.h>

void  main(){
    char name[40];
    int order;

    printf("******************Welcome to Mishra Cafe****************\n");
    printf("Enter your name: ");
    fgets(name,sizeof(name),stdin);
    printf("Hello, %s!\n", name);

    int choice;
    do {
        printf("\n********************Menu*********************\n");
        printf("1. Coffee\n");
        printf("2. Cookies\n");
        printf("3. Pizza\n");
        printf("4. Paneer Roll\n");
        printf("5. Samosa\n");
        printf("6. Chole Bhature\n");
        printf("7. Rajma Chawal\n");
        printf("8. Aloo Paratha\n");
        printf("9. Paneer Paratha\n");
        printf("10. Dal Chawal\n");

        printf("Your Choice: ");
        scanf("%d", &order);

        switch(order){
            case 1:
                printf("Done..\n");
                printf("You ordered Coffee!\n");
                printf("Enjoy the Coffee....\n");
                break;
            case 2:
                printf("Done..\n");
                printf("You ordered Cookies!\n");
                printf("Enjoy the Cookies....\n");
                break;
            case 3:
                printf("Done..\n");
                printf("You ordered Pizza!\n");
                printf("Enjoy the Pizza....\n");
                break;
            case 4:
                printf("Done..\n");
                printf("You ordered Paneer Roll!\n");
                printf("Enjoy the Paneer Roll....\n");
                break;

            default:
                printf("Invalid Choice. Please select a valid option.\n");
        }

        printf("\nDo you want to order again? (1 for Yes, 0 for No): ");
        scanf("%d", &choice);

    } while(choice != 0);

    printf("Thank you for visiting Mishra Cafe, %s!\n", name);
    getch();
}
