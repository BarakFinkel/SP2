#include "my_mat.h"
#include <stdio.h>
#define N 4

int main(void){
    
    char c = ' ';
    int mat[N][N];
    int shortmat[N][N];
    int temp;           // variable just for returning 0 values when a function ends.

    while(c != 'D')
    {
        
        scanf("%c", &c);

        if (c == 'A')
        {
            printf("go into first method");
            temp = initMat(mat);
            temp = setShortMat(mat, shortmat);
        }
        
        else if (c == 'B')
        {       
            printf("go into second method");
            int i,j;
            scanf('%d',&i);
            scanf('%d',&j);

            temp = routeExist(shortmat, i, j);
        }
        
        else if (c == 'C')
        {
            printf("go into third method");
            int i,j;
            scanf('%d',&i);
            scanf('%d',&j);

            temp = shortRoute(shortmat, i, j);
        }
    }
    
    return 0;
}

// Path: /mnt/c/Users/Selfisher/Documents/GitHub/SP2