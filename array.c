#include<stdio.h>
#include<stdlib.h>
int main()
{
    int mynumber[6]={2,4,6,8,10,12};
    int acessArray=mynumber[3];
    printf("value=%d",acessArray);

    for(int i=0;i<6;i++)
{
    printf("element[%d]=%d\n",i,mynumber[i]);
}

}
