#include <stdio.h>
#define N 4

//The function used for initializing the matrice:

int[][] initMat(void)
{
    int mat[N][N];
    
    for(int i=0; i<N; i++ ){
        
        for(int j=i; j<N ;j++){
            
            if (i==j){ 
                mat[i][j] = 0;
                continue;
            }    
            printf("Please enter the value of mat[%d][%d] and mat[%d][%d]: ",i,j,j,i);
            int temp;
            scanf("%d", &temp);
            mat[i][j] = temp;
            mat[j][i] = temp;
        }
    }
    return mat;
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
    int shortmat[N][N];
    for(int i=0; i<N; i++ ){
        for(int j=0; j<N ;j++){
            shortmat[i][j] = mat[i][j];
        }
    }

    for(int k=0; k<N; k++)
    {
        for(int i=0; i<N; i++)
        {
            for(int j= i + 1; j<N; j++)
            {
                if( (shortmat[i][j] == 0) )
                {
                    if ((shortmat[i][k] != 0) && (shortmat[k][j] != 0))
                    {
                        shortmat[i][j] = shortmat[i][k] + shortmat[k][j];
                        shortmat[j][i] = shortmat[i][k] + shortmat[k][j];
                    }
                }
                
                else
                {
                    if ((shortmat[i][k] != 0) && (shortmat[k][j] != 0))
                    {
                        if( shortmat[i][j] > (shortmat[i][k] + shortmat[k][j]) )
                        {
                            shortmat[i][j] = shortmat[i][k] + shortmat[k][j];
                        }
                    }
                }

       
            }
        }
    }

    if(shortmat[a][b] == 0 ) { printf("%d\n",-1); } 
    else                     { printf("%d\n", shortmat[a][b]); }

    return 0;
}