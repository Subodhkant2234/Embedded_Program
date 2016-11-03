#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void flipBits(unsigned int num);
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    unsigned int num,data, i ;
    scanf("%d", &num);
    for(i = 0;i < num; i++){
        scanf("%d", &data);
        flipBits(data);
    }      
    return 0;
}
void flipBits(unsigned int num)
 {
        int i = 0;
        for(i = 0; i <= 31; i++){
            if(num & (1 << i)){
                num = num ^ (1 <<i);
            } 
            else{
                num = num | (1 << i);
            }           
        }
    printf("%u\n", num);
    
}
