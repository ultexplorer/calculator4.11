#include <stdio.h>
#include "calc.h"
#define MAXVAL 100
double val[MAXVAL];
int sp = 0;

void push(double f){
    if(sp>MAXVAL){
        printf("Error, stack is full, can't push %.8g\n", f);
    }else{
        val[sp++]=f;
    }
}

double pop(void){
    if(sp>0){
        return val[--sp];
    }else{
        printf("Error, stack is empty!\n");
        return 0.0;
    }
}
