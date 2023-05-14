// structure array
// Enter address( house no. , block, city, state) of 5 people
#include <stdio.h>
#include <string.h>

struct address
{
    int houseNo;
    int block;
    char city[100];
    char state[100];
};
void printAdd(struct address hey);

void main()
{

    struct address people[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter the address of person %d\n", i + 1);
        printf("enter house no. ");
        scanf("%d", &people[i].houseNo);
        printf("enter block ");
        scanf("%d", &people[i].block);
        printf("enter city ");
        scanf("%s", people[i].city);
        printf("enter state ");
        scanf("%s", people[i].state);
    }
    for (int i = 0; i < 5; i++)
    {
        printAdd(people[i]);
    }
}
void printAdd(struct address hey)
{
    printf("Address is : %d, %d, %s, %s\n", hey.houseNo, hey.block, hey.city, hey.state);
}