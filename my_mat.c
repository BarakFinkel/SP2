#include <stdio.h>
#include <math.h>

//The function used for initializing the matrice:

int initMat(void)
{
    int mat[4][4];
    
    for(int i=0; i<4; i++ ){
        
        int from = 0;

        for(int j=from; i<until ;j++){
            
            if (i==j){ 
                mat[i][j] = 0;
                continue;
            }    

            printf("Please enter the value of mat[%d][%d] and mat[%d][%d]: ",i,j,j,i);

            int temp;
            scanf("%d", temp);
            mat[i][j] = temp;
            mat[j][i] = temp;
        }

        from++;
    }

    return 0;
}

int routeExist(int mat[][])
{
    
}