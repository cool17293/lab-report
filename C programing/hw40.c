//WAP to calculate both sum and average of array
#include <stdio.h>
void main (){
    int i,n,sum=0,arr[n];
    float average;
    printf("enter the number of elements inn the array:");
    scanf("%d",&n);
    printf("enter the elements of the array:\n");
    for (i=0;i<n;i++){
        sacnf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    average=(float)sum/n;
    printf("sum of the array element:%d\n",sum);
    printf("average of the element of the array element:%2f\n",average)
}