#include <stdio.h>


//Structure for grouproom variables
struct groupRoom
{
    int roomNumber; 
    int roomSize;
    int time[10];
};


int main ()

{
int i;
int j;

    struct groupRoom room[5];

    for(i = 0;i<5;i++)
    {
        room[i].roomSize = 8;
        room[i].roomNumber = i+1;

        for (j = 0; j<10;j++)
        {
            room[i].time[j] = 1;
        }
        
    }

Vilken tid?
"0: 8:00"
"1: 9:00"

"5:  13.00"
användaren skriver 5 (= 13.00)
for (loopa igenom varje rum och kolla ledighet vid 13.00)

printa ut alla lediga tider
if(room[i].time[5] == 1)

print: room[i].roomNumber är ledigt klockan %d 13:00

    return 0;
}
