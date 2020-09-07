#include<stdio.h>
int main(){
int x,w,x100,x50, x20,x10,x5,x2,x1,y50,y25,y10,y5,y1;
double y;

scanf("%lf",&y);
x=y;
w=(y-x)*100;

printf("NOTAS:\n");

printf("%d nota(s) de R$ 100.00\n", x/100);
x=(x%100);

printf("%d nota(s) de R$ 50.00\n", x/50);
x=(x%50);

printf("%d nota(s) de R$ 20.00\n", x/20);
x=(x%20);

printf("%d nota(s) de R$ 10.00\n", x/10);
x=(x%10);

printf("%d nota(s) de R$ 5.00\n", x/5);
x=(x%5);

printf("%d nota(s) de R$ 2.00\n", x/2);
x=(x%2);

printf("MOEDAS:\n");

printf("%d moeda(s) de R$ 1.00\n", x/1);
x=(x%1);

printf("%d moeda(s) de R$ 0.50\n", w/50);
w=(w%50);

printf("%d moeda(s) de R$ 0.25\n",w/25);
w=(w%25);

printf("%d moeda(s) de R$ 0.10\n",w/10);
w=(w%10);

printf("%d moeda(s) de R$ 0.05\n", w/5);
w=(w%5);

printf("%d moeda(s) de R$ 0.01\n", w/1);

  return 0;
}