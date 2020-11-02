#include <stdio.h>
int main(){
    int n,n1,i,w,y,count,count2;
    char a[1001], b[1001];
   
    scanf("%d",&n);
    n1=n;
    count2=0;
    while( count2 < n1){
        scanf("%s%s",a,b);
        count = 0;
        for(y = strlen(b), w = strlen(a) ; y >= 0; y--, w--){
            if(a[w] == b[y]){
                count++;
            }              
        }
        if(count == strlen(b)+1){
            printf("encaixa\n");
        } 
        else{
            printf("nao encaixa\n");   
        } 
        count2++;
    }
    return 0;
}