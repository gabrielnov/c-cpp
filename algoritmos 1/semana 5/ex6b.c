#include <stdio.h>

int minimo(int s[5], int index, int min){
    if(index == 0)
        return min;
 
    else{
        if(s[index] < min)
            min = s[index];
    
        return minimo(s, index-1, min);
    }
}

int main(){

    int s[10] = {52, 21, 2, 3, 5};

    printf("%d", minimo(s, 4, s[0]));
}