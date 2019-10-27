#include <stdio.h>
#include <stdlib.h>
 
int main()
{
  double h,m;
  int minute_angle,hour_angle,angle;
  scanf("%lf%lf",&h,&m);
    // Validate input
    if(h <0 || m < 0 || h >12 || m > 60)
        printf("Invalid input bruh");


    //Exception
    if(h == 12) h = 0;
    if(m == 60) m = 0;
 

   hour_angle = 0.5 * (h*60 + m);
   minute_angle = 6*m;
 
    // Difference
   angle = abs(hour_angle - minute_angle);
 
    // Give inner
    if(angle > 180){
      angle = 360-angle;
    }
 
    printf("the damned angle is %d",angle);
}