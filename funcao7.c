/*FATEC 
Curso: ADS/B; Matutino
Disciplina: Linguagem de programação
Professor: Reinaldo Arakaki
Aluno: Ricardo Sousa de Paiva
Exercício 7 de funções*/


#include <stdio.h>
int contadigitos(int n, int d){
  int count=0;
  int rest;
  do{
    rest=n%10; 
    n=n/10; 
    if(rest == d){
      count++;  
    }
  } while( n != 0);
  return count;
}

int main(){
  int a,b;
  int d=1;
  int count_a=0;
  int count_b=0;

  scanf("%d %d",&a,&b);
   
  while(d <= 9){
    
    contadigitos(a,d);
    count_a= contadigitos(a,d);

    contadigitos(b,d);
    count_b= contadigitos(b,d);

    d++;
  } 

  if(count_a == count_b){
    printf("%d é permutação de %d.",a,b);
  }else
  {
    printf("%d não é permutação de %d.",a,b); 
  }
   
  return 0;  
} 