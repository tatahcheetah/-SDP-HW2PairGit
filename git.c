#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));

    for(int i=0;i<4;i++)
    {
        printf("Last 3 Digi Lotto ");
        for(int j=0;j<3;j++)
            printf("%d", rand() % 10);
        printf("\n");
    }
    
}