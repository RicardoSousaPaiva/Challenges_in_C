#include <stdio.h>
#include <string.h>
int main() {
    
    char sentence[51],code[51],receiver;
    int n,m,i,y,test;

    scanf("%d",&test);
    
    for(y=0; y < test; y++){

        memset(code,0,51);
        memset(sentence,0,51);

        scanf("%s%d", code,&m);
        
        n=strlen(code);

        if(m <=25){

            for(i= 0; i < n; i++){
                receiver= code[i]-m;

                if( receiver < 65){
                    receiver= receiver+26;
                }

                sentence[i]=receiver;
            }
            printf("%s\n", sentence);
        }
    }
    return 0;
}