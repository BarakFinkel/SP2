#include <stdio.h>
#define N 10

//The function used for initializing the matrice:

int initMat(int mat[N][N])
{
    
    for(int i=0; i<N; i++ ){

        for(int j=i; j<N ;j++){
            
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

int routeExist(int mat[N][N], int barr[N], int i, int j)
{
    barr[i] = 1;                           

    if( mat[i][j] != 0) 
    {
        printf("True\n");
        return 1;
    }
    
    for(int k=0; k < N; k++ )
    {
        if (k==i)                                  { continue; }
        if ( (mat[i][k] != 0) && (barr[k] == 0) )  { routeExist(mat, barr, k, j); } 
    }

    printf("False\n");
    return 0;
}

int shortRoute(int mat[N][N], int a, int b)
{
    int shortmat[N][N] = mat;
    
    for(int k=0; k<N; k++)
    {
        for(int i=1; i<N; i++)
        {
            for(int j=i; j<N; j++)
            {
                if( (shortmat[i][j] == 0 && shortmat[i][k] == 0) && shortmat[k][i] == 0 ) { shortmat[i][j] = 0; }
                else
                {
                    if( shortmat[i][j] > shortmat[i][k] + shortmat[k][i] )
                    {
                        shortmat[i][j] = shortmat[i][k] + shortmat[k][i];
                    } 
                } 
            }
        }
    }

    if(shortmat[a][b] == 0 ) { printf(-1+"\n"); } 
    else                     { printf(shortmat[a][b]+"\n"); }

    return 0;
}