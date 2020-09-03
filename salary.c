#include <stdio.h>
int main(){
    int number,mhours;
    float vhours,salary;
    scanf("%d %d %f", &number,&mhours,&vhours);
    salary=(mhours*vhours);
    printf("NUMBER = %d\n",number);
    printf("SALARY = U$ %.2lf\n", salary);
    return 0;
}
