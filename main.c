#include "my_mat.h"
#include <stdio.h>
int main(){
    char c = ' ';
    while(c != 'D'){
        scanf("%c", &c);
        if (c == 'A'){
            printf("go into first method");
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