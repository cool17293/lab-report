//write a program to insert a new elemnt in array
#include<stdio.h>
void main(){
    int a[5],i,p,v;
    printf("insert the elementts are:");
    scanf("%d",&a[i]);
    printf("position p=");
    scanf("%d",&p);
    printf("value v=");
    scanf("%d",&v);
    for(i=(5-1);i>=(p-1);i--)
        {
            a+[i+1]=a[i];
        }
    a[p-1]=v;
    printf("\n values are:\n");
    for(i=0;i<=5;a[i]);
    {
        printf("%d\n",a[i]);
    }
}