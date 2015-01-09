#include <stdio.h>

#include "bufferA.h"    
#include "bufferB.h"    

int main(){
    int i;
    A a;
    A_curcular_buffer_init();
    for(i=0;i<5;i++){
        a.a = a.b = a.c = i;
        A_curcular_buffer_push(&a);
    }
    
    B b;
    B_curcular_buffer_init();
    for(i=0;i<10;i++){
        b.b = i+0.5;
        B_curcular_buffer_push(&b);
    }
    
    for(i=0;i<5;i++){
        A_curcular_buffer_pop(&a);
        printf("A %i %i %i\n",a.a,a.b,a.c);
        B_curcular_buffer_pop(&b);
        printf("B %f\n",b.b);
    }    
}
