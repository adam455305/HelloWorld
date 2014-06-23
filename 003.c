#include <stdio.h>
int main (int argc ,const char *argv[]){
        char str[100];
        scanf("%s",&str);
        printf("%s", str);
        fprintf(stdout,"%s\n", str);
        fprintf(stderr,"%s\n",str);
        return 0;
}

