#include <stdio.h>
int main() {
    double A,B,p1,p2,media;   
    scanf("%lf %lf",&A,&B);
    p1=3.5;
    p2=7.5;
    media=((A*p1)+(B*p2))/(p1+p2);
    printf("MEDIA = %.5lf\n",media); 
return 0;
}

