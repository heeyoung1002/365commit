#include <stdio.h>

int main(void){
    
    double A,B;
    scanf("%d %d", &A, &B);
    
    if(A>0 && B<10){
        printf("%.9lf", A*B);
    }
   
    return 0;
}
