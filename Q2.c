/* How will you print numbers from 1 to 100 without using loop? */
#include <stdio.h>

// Prints numbers from 1 to n
void printNos(unsigned int n)
{
    if (n > 0)
    {
        printNos(n - 1);
        printf("%d ", n);
    }
    return;
}

int main()
{
    printNos(100);
    getchar();
    return 0;
}
