#include <stdio.h>
//#include <ctype.h>
#include <stdlib.h>
//#include <math.h>
#include <string.h>
#include "calc.h"


#define MAXOP 100


int main()
{
    int type;
    double op2;
    char s[MAXOP];
    
    while((type=getop(s))!=EOF){
        switch (type)
        {
        case NUMBER:
            push(atof(s));
            break;
        case '+':
            push(pop()+pop());
            break;
        case '\n':
            printf("\t%.8g\n", pop());
            break;
        default:
            printf("Error, неивестная команда %s\n", s);
            break;
        }
    }
    
    return 0;
}

