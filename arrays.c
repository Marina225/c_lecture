#include<stdio.h>


int main(){

int x[5]={1,2,3,4,5};
int x1[]={1,2,3,4,5};
int x2[5];
int x3[5]={1};

for (int i=0; i<5; i++)
{
printf("%i %i %p %p \n ", x[i], *(x+i), x+i, &x[i]);
}
printf("\n");



return 0;
}
