#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Defining the struct for a person
typedef struct
{
    char name[20];
    char number[20];
} person;

int compare_case_insensitive(const char *a, const char *b)
{
    while (*a != '\0' && *b != '\0')
    {
        int ca = tolower((unsigned char) *a);
        int cb = tolower((unsigned char) *b);

        if (ca != cb)
        {
            return ca - cb;
        }

        a++;
        b++;
    }

    return tolower((unsigned char) *a) - tolower((unsigned char) *b);
}

int main(void)
{
    // Adding the information of the people
    person people[3];

    strcpy(people[0].name, "Kelly");
    strcpy(people[0].number, "+1-617-495-1000");

    strcpy(people[1].name, "David");
    strcpy(people[1].number, "+1-617-495-1000");

    strcpy(people[2].name, "John");
    strcpy(people[2].number, "+1-949-468-2750");

    // Search for name
    char name[20];
    printf("Name: ");
    scanf("%19s", name);

    for (int i = 0; i < 3; i++)
    {
        if (compare_case_insensitive(people[i].name, name) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
}
