#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    int i,j;
    
    for(i=0;i<10;i++)
    {
        printf("%d\n",i);
    }
    printf("\n");
    
    printf("Lotto is ");
    for(i=0;i<6;i++)
    {
        printf("%d", rand() % 10);
    }
    
    printf("\n\n");

    for(i=0;i<4;i++)
    {
        printf("Last 3 Digi Lotto ");
        for(j=0;j<3;j++)
            printf("%d", rand() % 10);
        printf("\n");
    }
    
    printf("\n");
    
    
    printf("Last 2 Digi Lotto ");
    for(j=0;j<2;j++)
        printf("%d", rand() % 10);
    printf("\n");
    
    
}