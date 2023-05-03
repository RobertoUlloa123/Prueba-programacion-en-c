#include <stdio.h>

int main()
{
    int n=0,n2=1,n3,numero,limite;
    
    printf(" Ingrese un numero para hacer la serie Fibonacci \n");
    scanf("%d",&numero);
    printf (" %d + %d",%n,%n2);
    for(limite = 0; limite < numero; limite++){
    printf("%d + ",n2);
    printf("%d + ",n);
    // no entiendo por que no se queda en el limite 
    n2 = n2 + n;
    n = n + n2;
    
  }
    return 0;
}
