/*
Consider an array of integers,A=[a0,a1....an-1], where all but one of the integers occur in pairs. In other words, every element in occurs exactly twice except for one unique element.
Given A, find and print the unique element in A
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
int lonelyinteger(int a_size, int* a) {
    int j = 0, k =0;
        int count = 0;
		if(a_size == 1)
			return a[0];
        for(k = 0; k < a_size ; k++){
           for(j = 0;j < a_size; j++){
					printf("**a[%d]=%d a[%d]=%d\n", k, a[k], j, a[j]);
					if(a[k] == a[j]) {
						count ++;
					printf("Count Val:%d\n",count);
				}
        }
			if(count == 1)
				return a[k];
			count = 0;
	}
	return 0;
}
int main() {
    int res;
    int _a_size, _a_i;
    scanf("%d", &_a_size);
    int _a[_a_size];
    for(_a_i = 0; _a_i < _a_size; _a_i++) { 
        int _a_item;
        scanf("%d", &_a_item);
        
        _a[_a_i] = _a_item;
    }
    res = lonelyinteger(_a_size, _a);
    printf("%d", res);
    
    return 0;
}
