//Ques5.c
#include <stdio.h>
int main()
{
int x,y;

printf("coordinate x:");
scanf("%d", &x);
printf("coordinate y:");
scanf("%d", &y);

if(x==0 && y==0)
printf("coordinate point (%d, %d) lies on the origin", x,y);
else if(x>0 && y>0)
printf("coordinate point (%d, %d) lies on the First quadrant", x,y);
else if(x<0 && y>0)
printf("coordinate point (%d, %d) lies on the Second quadrant", x,y);
else if(x<0 && y<0)
printf("coordinate point (%d, %d) lies on the Third quadrant", x,y);
else if(x>0 && y>0)
printf("coordinate point (%d, %d) lies on the Fourth quadrant", x,y);
else if(x==0)
printf("coordinate point (%d, %d) lies on the Y axis", x,y);
else if(y==0)
printf("coordinate point (%d, %d) lies on the X axis", x,y);

return 0;
}
