#include<stdio.h>
int main() {

int age;
scanf("%d", &age);

int year=age/365;
printf("%d ano(s)\n", year);

int rest_year=age%365;
int rest_month=rest_year%30;

int month=rest_year/30;
printf("%d mes(es)\n", month);

int day=rest_month%30;
printf("%d dia(s)\n",day);



return 0;
}