#include <stdio.h>

int binario(int decimal){
   
    if (decimal == 0){
        return 0;
    } else{
        return decimal % 2 + 10 * (binario(decimal/2));
    }

}

int main(){
    printf("%d", binario(55));
}