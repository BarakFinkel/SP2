#include <stdio.h>
#include <math.h>

//The function used for initializing the matrice:

int initMat(int mat[4][4])
{
    
    for(int i=0; i<4; i++ ){

        for(int j=i; j<4 ;j++){
            
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

        
    }

    return 0;
}

int routeExist(int mat[4][4], int barr[4], int i, int j)
{
    barr[i] = 1;                           

    if( mat[i][j] != 0) {return 1;}
    
    for(int k=0; k < 4; k++ )
    {
        if (k==i)                                  { continue; }
        if ( (mat[i][k] != 0) && (barr[k] == 0) )  { routeExist(mat, barr, k, j); } 
    }

    return 0;
}