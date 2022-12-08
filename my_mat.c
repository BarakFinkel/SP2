#include <stdio.h>
#include "my_mat.h"

//The function used for initializing the matrice:

int initMat(int mat[][10])
{
    
    for(int i=0; i<10; i++){
        
        for(int j=0; j<10 ;j++){
            
            // if (i==j){ 
            //     mat[i][j] = 0;
            //     continue;
            // }    
            
            int temp;
            scanf("%d", &temp);
            mat[i][j] = temp;
            mat[j][i] = temp;
        }
    }

    return 0;
}

int setShortMat(int mat[][10], int shortmat[][10])
{
    for( int i=0 ; i<10 ; i++ )
    {
        for( int j=0 ; j<10 ; j++)
        {
            shortmat[i][j] = mat[i][j];
        }
    }

    for( int k=0 ; k<10 ; k++ )
    {
        for( int i=0 ; i<10 ; i++ )
        {
            for( int j=i+1 ; j<10 ; j++ )
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

    return 0;
}

int routeExist(int shortmat[][10], int a, int b)
{
    if ( shortmat[a][b] == 0 )  { printf("False\n"); }
    else                        { printf("True\n"); }

    return 0;
}

int shortRoute(int shortmat[][10], int a, int b)
{
    if ( shortmat[a][b] == 0 ) { printf("%d\n", -1); } 
    else                       { printf("%d\n", shortmat[a][b]); }

    return 0;
}