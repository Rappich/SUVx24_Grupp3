#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100 // Define a maximum limit for students

typedef struct Postadress
{
    char streetAdress[40];
    int zipCode;
    char region[30];
} postadress;

typedef struct Student
{
    int regNumber;
    char name[50];
    char email[50];
    int phonenumber;
    postadress adress;
} student;

int count;
student students[MAX_STUDENTS];

void removeStudent();
void changeStudent();
void printStudentDetails(student s);
void addStudent();

int main()
{
    int menu;
    do
    {
        printf("Menu: \n1.Register \n2.Show registered students \n3.Change student \n4.Remove student\n5.Exit\n");
        scanf("%d", &menu);
        getchar();
        switch (menu)
        {
        case 1:
            printf("How many students do you want to add to the register?\n");
            scanf("%d", &count);
            getchar();
            addStudent();
            break;
        case 2:
            for (int i = 0; i < count; i++)
            {
                printStudentDetails(students[i]);
            }
            break;
        case 3:
            changeStudent();
            break;
        case 4:
            removeStudent();
            break;
        case 5:
            printf("Exiting the program");
            break;

        default:
            printf("Invalide option. Please try again!");
            break;
        }

    } while (menu != 5);
    return 0;
}

// lägger till studenter.
void addStudent()
{
    for (int i = 0; i < count; i++)
    {
        printf("Student %d name:\n ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);
        printf("Student email:\n ");
        fgets(students[i].email, sizeof(students[i].email), stdin);
        printf("Phone number:\n ");
        scanf("%d", &students[i].phonenumber);
        getchar();
        printf("Add Streetadress\n");
        fgets(students[i].adress.streetAdress, sizeof(students[i].adress.streetAdress), stdin);
        printf("Zipcode\n");
        scanf("%d", &students[i].adress.zipCode);
        getchar();
        printf("Region\n ");
        fgets(students[i].adress.region, sizeof(students[i].adress.region), stdin);

        students[i].regNumber = i+1;
        printStudentDetails(students[i]);
    }
}
// Tar bort studenter
void removeStudent()
{
    // Display Students()
    int kill;
    for (int i = 0; i < count; i++)
    {
        printf("%d. %s\n", i+1, students[i].name); // students == students[0]
    }
    printf("Which student would you like to remove? ");
    scanf("%d", &kill);
    getchar();
    kill--;
    student emptyStudent;
    emptyStudent.phonenumber = 0;
    emptyStudent.regNumber = 0;
    emptyStudent.adress.zipCode = 0;
    students[kill] = emptyStudent;
}
// Lista över registrerade studenter
void printStudentDetails(student s)
{
    printf("----------------------------\n\n");
    printf("\nStudent details entered:\n");
    printf("Name: %s\n", s.name);
    printf("Email: %s\n", s.email);
    printf("Phone Number: %d\n", s.phonenumber);
    printf("Street Address: %s\n", s.adress.streetAdress);
    printf("Zipcode: %d\n", s.adress.zipCode);
    printf("Region: %s\n", s.adress.region);
    printf("Registration Number: %d\n", s.regNumber);
    printf("----------------------------\n\n");
}

// Ändrar personuppgifter
void changeStudent()
{
    int change;
    for (int i = 0; i < count; i++)
    {
        printf("%d. %s\n", i+1, students[i].name);
    }
    printf("Which student would you like to change? ");
    scanf("%d", &change);
    getchar();
    change--;
    printf("Student name:\n ");
    fgets(students[change].name, sizeof(students[change].name), stdin);
    printf("Student email:\n ");
    fgets(students[change].email, sizeof(students[change].email), stdin);
    printf("Phone number:\n ");
    scanf("%d", &students[change].phonenumber);
    getchar();
    printf("Add Streetadress\n");
    fgets(students[change].adress.streetAdress, sizeof(students[change].adress.streetAdress), stdin);
    printf("Zipcode\n");
    scanf("%d", &students[change].adress.zipCode);
    getchar();
    printf("Region\n ");
    fgets(students[change].adress.region, sizeof(students[change].adress.region), stdin);

    printStudentDetails(students[change]);
}