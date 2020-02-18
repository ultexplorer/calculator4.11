#include <stdio.h>
#define MAXBUF 100
char buf[MAXBUF];
int bufp = 0;

int getch(void){
    return (bufp>0)? buf[--bufp] : getchar();
}

void ungetch(int c){
    if(bufp>MAXBUF){
        printf("Error, too many characters (buf is full)!\n");
    }else{
        buf[bufp++]=c;
    }
}
