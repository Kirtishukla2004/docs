#include <stdio.h>

void linear();
void binary();

void linear(int search, int i, int len)
{

    printf("Enter the arrey length:");
    scanf("%d", &len);
    int arrey[len];

    printf("enter  %d arrey elements:", len);
    for (i = 0; i < len; i++)
    {
        printf(" arr[%d] = ", i);
        scanf("%d", &arrey[i]);
    }

    printf("Enter a number to search\n");
    scanf("%d", &search);

    for (i = 0; i < len; i++)
    {
        if (arrey[i] == search) /* If required element is found */
        {
            printf("%d is present at location %d.\n", search, i + 1);
            break;
        }
    }
    if (i == len)
        printf("%d isn't present in the array.\n", search);

    return 0;
}

void binary(int search, int first, int last, int middle)
{

    int i, len;
    system("cls");
    printf("Enter the arrey length:");
    scanf("%d", &len);
    int arrey[len];

    printf("enter  %d arrey elements:", len);
    for (i = 0; i < len; i++)
    {
        printf(" arr[%d] = ", i);
        scanf("%d", &arrey[i]);
    }

    printf("Enter value to find\n");
    scanf("%d", &search);
    first = 0;
    last = len - 1;
    middle = (first + last) / 2;

    while (first <= last)
    {
        if (arrey[middle] < search)
            first = middle + 1;
        else if (arrey[middle] == search)
        {
            printf("%d found at location %d.\n", search, middle + 1);
            break;
        }
        else
            last = middle - 1;

        middle = (first + last) / 2;
    }
    if (first > last)
        printf("Not found! %d isn't present in the list.\n", search);
}

int main()
{
    int len, i, arrey, search, first, last, middle, low, high, ch, mid;
    system("cls");
    printf("enter your method for searching\n\n A. ENTER (1)FOR LINEAR SEARCH \n\n B. ENTER (2) FOR BINARY SEARCH\n\n");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        linear(search, i, len);
        break;

    case 2:
        binary(search, first, last, middle);
        break;

    default:
        printf("!! Invalid choice");
        break;
    }

    return 0;
}
