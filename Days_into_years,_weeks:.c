#include<stdio.h>
int main()
{
    int yrs,weeks,days;
    scanf("%d",&days);
    yrs=days/365;
    weeks=(days%365)/7;
    printf("%d
%d",yrs,weeks);
    
    
}