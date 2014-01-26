#include <stdio.h>
#include <stdlib.h>

struct lista
{
    int num;
    struct lista *next;
};

int main()
{
    struct lista *l1, *temp;
    int n,i;
    printf("Enter how many items you want in list:");
    scanf("%d", &n);

    l1 = (struct lista *) malloc(sizeof(struct lista));
    temp =l1;
    for(i=0; i<n; i++)
    {
        printf("\nEnter number: ");
        scanf("%d", &(l1->num));
        if(i== n-1)
        {
            l1->next = NULL;
        }
        else
        {
            l1->next = (struct lista *) malloc(sizeof(struct lista));
            l1 = l1->next;
        }
    }

    printf("\n\nRESULT:\n\n");

    l1 =temp;
    while(l1 != NULL)
    {
        printf("%d\t", l1->num);
        l1 = l1->next;
    }
    return 0;

}
