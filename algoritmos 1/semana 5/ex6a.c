#include <stdio.h>

int maximo(int s[5], int index, int max){
    if(index == 0)
        return max;
 
    else{
        if(s[index] > max)
            max = s[index];
    
        return maximo(s, index-1, max);
    }
}

int main(){

    int s[10] = {0, 21, 2, 3, 5};

    printf("%d", maximo(s, 5, s[0]));
}