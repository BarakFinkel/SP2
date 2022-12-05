#include "my_mat.h"
#include <stdio.h>
#define N 4
int main(){
    char c = ' ';
    int mat[N][N];
    while(c != 'D'){
        scanf("%c", &c);
        if (c == 'A'){
            printf("go into first method");
            mat = initMat();
        }
        else if (c == 'B'){
            printf("go into second method");
        }
        else if (c == 'C'){
            printf("go into third method");
        }
    }
    return 0;
}

// Path: /mnt/c/Users/Selfisher/Documents/GitHub/SP2