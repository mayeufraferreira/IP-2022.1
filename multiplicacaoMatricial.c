#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int matrizA[3][3];
    int matrizB[3][3];
    int matrizC[3][3];
    int i, j, s;
    int dim = 3;

    for(i = 0; i < dim; i++){
      for(j = 0; j < dim; j++){
          printf("Digite o valor A[%d][%d]: \n", i,j);
          scanf("%d", &matrizA[i][j]);
          printf("Digite o valor B[%d][%d]: \n", i, j);
          scanf("%d", &matrizB[i][j]);
       }
    }

    for(i = 0; i < dim; i++){
      for(j = 0; j < dim; j++){
         matrizC[i][j] = 0;
      }
    }

    for(i=0; i < dim; i++){
       for(j=0; j < dim; j++){

          for(s=0; s< dim; s++){
             matrizC[i][j] = matrizC[i][j] + matrizA[i][s]*matrizB[s][j];
          }

       }
    }

    for(i=0; i < dim; i++){
        for(j=0; j < dim; j++){
            printf("matrizC[%d][%d] = %d\n", i, j, matrizC[i][j]);

        }
    }


    return 0;
}
