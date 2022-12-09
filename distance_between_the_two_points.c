#include <stdio.h>
#include<math.h>
int main()
{
    int x1, x2, y1, y2;
    float dtn; scanf("%d %d",&x1, &y1);
    scanf("%d %d",&x2, &y2);
    int x = pow((x2- x1), 2);
    int y = pow((y2- y1), 2);
    dtn = sqrt(x+y);
    printf("%0.4f",dtn);
    
    
}