#include <stdio.h>
#define N 4

//The function used for initializing the matrice:

void initMat(int mat[N][N])
{
    
    for(int i=0; i<N; i++){
        
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
}

void setShortMat(int mat[N][N], int shortmat[N][N])
{
    for( int i=0 ; i<N ; i++ )
    {
        for( int j=0 ; j<N ; j++)
        {
            shortmat[i][j] = mat[i][j];
        }
    }

    for( int k=0 ; k<N ; k++ )
    {
        for( int i=0 ; i<N ; i++ )
        {
            for( int j=i+1 ; j<N ; j++ )
            {
                if( shortmat[i][j] == 0 )
                {
                    if ( (shortmat[i][k] != 0) && (shortmat[k][j] != 0) )
                    {
                        shortmat[i][j] = shortmat[i][k] + shortmat[k][j];
                        shortmat[j][i] = shortmat[i][k] + shortmat[k][j];
                    }
                }
                
                else
                {
                    if ( (shortmat[i][k] != 0) && (shortmat[k][j] != 0) )
                    {
                        if( shortmat[i][j] > (shortmat[i][k] + shortmat[k][j]) )
                        {
                            shortmat[i][j] = shortmat[i][k] + shortmat[k][j];
                            shortmat[j][i] = shortmat[i][k] + shortmat[k][j];
                        }
                    }
                }
            }
        }
    }
}

void routeExist(int shortmat[N][N], int a, int b)
{
    if ( shortmat[a][b] == 0 )  { printf("False."); }
    else                        { printf("False."); }
}

void shortRoute(int shortmat[N][N], int a, int b)
{
    if ( shortmat[a][b] == 0 ) { printf("%d\n", -1); } 
    else                       { printf("%d\n", shortmat[a][b]); }
}