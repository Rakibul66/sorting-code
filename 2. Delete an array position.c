#include<stdio.h>
int main()
{
    int i, j, p;
    int data[10]={1,2,3,4,5,6,7,8};
    printf("Enter the position:");
    scanf("%d", &p);
    for(i=p-1; i<8-1; i++)
    {
            data[i]=data[i+1];
    }
    for(j=0; j<8-1; j++)
    {
        printf("%d", data[j]);
    }
    return 0;
}
