#include <stdio.h>
#include <string.h>

int main() {

    int roomNumber[5] = {1, 2, 3, 4, 5};
    int roomSize[5] = {8, 8, 8, 8, 8};
    int timeSlots[5][10];
    char bookerNames[5][10][50];        
    
    for (int i = 0; i < 5; i++) 
    for (int j = 0; j < 10; j++) 
    {
        timeSlots[i][j] = 1;
        bookerNames[i][j][0] = '.';
    }
    

    int choice, menu, chosenRoom;
    char rerun, name[50];

    do 
    {
        printf("Choose an option\n");
        printf("1: Book a room\n");
        printf("2: Do you want to view or edit your appointment?\n");
        scanf("%d", &menu);

        switch (menu) 
        {
            case 1:
            printf("You can book rooms by the hour, starting from 08.00 - 17.00\n");
            printf("1: 08:00\n2: 09:00\n3: 10:00\n4: 11:00\n5: 12:00\n6: 13:00\n7: 14:00\n8: 15:00\n9: 16:00\n");
            scanf("%d", &choice);

            for (int i = 0; i < 5; i++) 
            {
                if (timeSlots[i][choice-1] == 1) 
                printf("Room %d is available\n", roomNumber[i]);
            }

            printf("What room do you want to book? (1-5)\n");
            scanf("%d", &chosenRoom);

            if (timeSlots[chosenRoom-1][choice-1] == 1) 
            {
                printf("What is your name?\n");
                getchar();
                fgets(bookerNames[chosenRoom-1][choice-1], sizeof(bookerNames[chosenRoom-1][choice-1]), stdin);

                printf("Your room is booked! Enjoy your stay.\n");
                timeSlots[chosenRoom-1][choice-1] = 0;
            } 
            else 
            {
                printf("Error! The room is already booked.\n");
            }
            break;

            case 2:
      
            printf("What's your name? Enter your full name:\n");
            getchar();
            fgets(name, sizeof(name), stdin);

            for (int i = 0; i < 5; i++) 
            for (int j = 0; j < 10; j++) 
            {
                if (strcmp(name, bookerNames[i][j]) == 0) 
                {
                    printf("You booked room %d at time %d:00\n", roomNumber[i], j + 8);
                    printf("Do you want to cancel the booking (y/n)?\n");
                    char cancel;
                    scanf(" %c", &cancel);

                    if (cancel == 'y') 
                    {
                        printf("Your booking is canceled.\n");
                        timeSlots[i][j] = 1;
                        memset(bookerNames[i][j], 0, sizeof(bookerNames[i][j]));
                    }
                }
            }
            break;

            default:
            printf("Invalid option!\n");
            break;
        }

        printf("Do you want to run again? (y/n): ");
        scanf(" %c", &rerun);

    } while (rerun == 'y' || rerun == 'Y');

    return 0;
}
