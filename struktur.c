#include <stdio.h>
#include <stdbool.h>


//Structure for grouproom variables
struct groupRoom
{
    int roomNumber; 
    bool availability;
    int roomSize;
    int time[10];
};


int main ()

{
int i;

    struct groupRoom room[5];

    for(i = 0;i<5;i++)
    {
        room[i].availability = true;
        room[i].roomSize = 8;
        room[i].time
    }

    return 0;
}