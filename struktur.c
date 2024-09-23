#include <stdio.h>
#include <struct.h>

struct groupRoom
{
    int roomNumber; 
    int roomSize;
    int time[10];
};


int main ()

{
int choice;
int menu;

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



printf("Choose an option\n");
printf("1: Book a room\n");
scanf("%d", &menu);

switch (menu)
    {
case 1:
        printf("You can book rooms by the hour, starting from 08.00 - 17.00\n Press the number specified for the time \n");
        printf("1: 08.00\n 2: 09:00\n 3: 10:00\n 4: 11:00\n5: 12:00\n6: 13:00\n7: 14:00\n8: 15:00\n9: 16:00");
        scanf("%d", &choice);

        for (int i = 0;i<5;i++)
            {
               if (room[i].time[choice-1] == 1)
               printf("Room %d is available\n",room[i].roomNumber);
            }

    break;
/*case(avboka):
    code 
    break;    
case(confirmation) constant-expression :
    code 
    break;*/
default:
    break;
    }


/*printf(avalible time);
scanf(choose);

print(name of booker);
scanf(name)


printf("Do you want to run again? y/n")
scanf(" %c",&rerun)

}(while (rerun== 'y'))*/

    return 0;
}
