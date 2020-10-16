#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char* argv[]) {
 int soma,i;
 
 
 if(argc > 1){
    for(i=1; i< argc; i++){
      soma= soma + atoi(argv[i]);
    }
    printf("Resultado= %d\n",soma);
  } 
  
  
  return 0; 
}