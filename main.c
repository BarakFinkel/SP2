#include "my_mat.h"
#include <stdio.h>
#define N 4

int main(void){
    
    char c = ' ';
    int mat[N][N];
    int shortmat[N][N];

    while(c != 'D'){
        
        scanf("%c", &c);
        if (c == 'A')
        {
            printf("go into first method");
            initMat(mat);
            setShortMat(mat, shortmat);
        }
        
        else if (c == 'B'){
            printf("go into second method");
            int i,j;
            scanf('%d',&i);
            scanf('%d',&j);
            

        }
        
        else if (c == 'C'){
            printf("go into third method");
        }
    }
    
    return 0;
}

// Path: /mnt/c/Users/Selfisher/Documents/GitHub/SP2