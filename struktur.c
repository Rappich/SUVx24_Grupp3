#include <stdio.h>
#include <struct.h>

struct groupRoom
{
    int roomNumber; 
    int roomSize;
    int time[10];
    char booker[10][50];

};


int main ()

{
int choice;
int menu;
char rerun;


    struct groupRoom room[5];

    for(int i = 0;i<5;i++)
    {
        room[i].roomSize = 8;
        room[i].roomNumber = i+1;

        for (int j = 0; j<10;j++)
        {
            room[i].time[j] = 1;
        }
        
    }
    do 
{
printf("Choose an option\n");
printf("1: Book a room\n");
printf("2: Do you want to view or edit your appointment?\n");
scanf("%d", &menu);

switch (menu)
    {
case 1:
        printf("You can book rooms by the hour, starting from 08.00 - 17.00\n Press the number specified for the time \n");
        printf("1:      08.00\n 2:      09:00\n 3:      10:00\n 4:      11:00\n5:       12:00\n6:       13:00\n7:       14:00\n8:       15:00\n9:       16:00\n");
        scanf("%d", &choice);

        for (int i = 0;i<5;i++)
            {
               if (room[i].time[choice-1] == 1)
               printf("Room %d is available\n",room[i].roomNumber);
            }
        int chosenRoom;
        printf("What room do you want to book?\n");
        printf("1\n 2\n3\n 4\n5\n");
        scanf("%d", &chosenRoom);

        if (room[chosenRoom-1].time[choice-1] == 1)

            {
                printf("What is your name?\n");
                fgets(room[chosenRoom-1].booker[choice-1],sizeof(room[chosenRoom-1].booker[choice-1]),stdin);
                printf("Your room is booked! Enjoy your stay \n");
                room[chosenRoom-1].time[choice-1] = 0;

            } else 
            {
                printf("Error!");
            }

    break;

case(2):
char name [50];

    printf("What's your name? Enter your full name.\n");
    fgets(name,sizeof(name),stdin);
    printf("%s", name);

    for(int i = 0;i<5;i++)
    {
        for (int j = 0; j<10;j++)
        {
            char cancel;
                
                if (name == room[i].booker[j])
                {
                printf("You booked room %d at time %d:00",room[i].roomNumber,j+8);
                printf("Do you want to cancel (y/n) ?\n");
                scanf(" %c", &cancel);
                
                if (cancel == 'y')
                {
                    printf("Your booking is canceled\n");
                    char empty [50];
                    memset(room[i].booker[j],0,sizeof(room[i].booker[j]));
                    room[i].time[j] = 1;
                }   
                }


        }
        
    }


    break;    

default:
    break;
    
    }

printf("Do you want to run again? (y/n) ");
scanf(" %c",&rerun);
} while (rerun == 'y' || rerun == 'Y');

    return 0;
}
