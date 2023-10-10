#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main (){
	int op, n, n2, i, j, suma=0;
	srand(time(NULL));
	
	printf("1.Suma\n2.Resta\n3.Multiplicacion\n4.Diagonal\n5.Suma\n6.Terminar programa\n");
	printf("Ingrese la operacion que desea realizar: ");
	scanf("%d", &op);
	printf("Ingrese el tamano de su matriz A: ");
	scanf("%d", &n);
	printf("Ingrese el tamano de su matriz B: ");
	scanf("%d", &n2);
	
	int A[n][n];
	printf("Matriz A: \n");
	for(i=0;i<n;i++){
		for (j=0;j<n;j++){
			A[i][j]=rand()%10;
			printf("%d ", A[i][j]);	
		}
		printf("\n");
	}
	int B[n2][n2];
	printf("Matriz B: \n");
	for(i=0;i<n2;i++){
		for (j=0;j<n2;j++){
			B[i][j]=rand()%10;
			printf("%d ", B[i][j]);	
		}
		printf("\n");	
	}
	if (n != n2) {
	        printf("Error: Las matrices no tienen las mismas dimensiones.\n");
	        return 1; 
	    }
	    
	    
	 if(op==1){
        int resultado[n][n];
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
            resultado[i][j] = A[i][j] + B[i][j];
            }
        }
        printf("Resultado de la suma de matrices:\n");
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                printf("%d ", resultado[i][j]);
            }
            printf("\n");
        }
    }
    
	if(op==3){
        int resultado[n][n];
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
            resultado[i][j] = A[i][j] * B[i][j];
            }
        }
        printf("Resultado de la multiplicacion de matrices:\n");
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                printf("%d ", resultado[i][j]);
            }
            printf("\n");
        }
    }
    	if(op==2){
        int resultado[n][n];
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
            resultado[i][j] = A[i][j] - B[i][j];
            }
        }
        printf("Resultado de la resta de matrices:\n");
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                printf("%d ", resultado[i][j]);
            }
            printf("\n");
        }
    }
    	
	if (op == 4) {
	        printf("Diagonal de la matriz A:\n");
	        for (i = 0; i < n; i++) {
	            for (j = 0; j < n; j++) {
	                if (i == j) {
	                    printf("%d ", A[i][j]);
	                    	printf("\n");
	            	suma+=A[i][j];
	                } else {
	                    printf("  "); 
	                }
	            }
	    }
	     printf("Suma de la diagonal de la matriz A: %d\n", suma);
	    }

	if (op==5) {
	        printf("Elementos de la matriz A en la parte triangular superior:\n");
	        for (i=0; i<n; i++) {
	            for (j=i; j<n;j++) { 
	                printf("%d ", A[i][j]);
	                suma += A[i][j];
	            }
	            printf("\n");
	        }
	        printf("Suma de la parte triangular superior de la matriz A: %d\n", suma);
	    }
	return 0;
}
