#include <stdio.h>
#include <stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int *p = (int*)malloc(sizeof(int)*2);
    int i = 0, j = 0;
    for(i = 0; i < numsSize; i++){
        for(j = i+1; j < numsSize; j++){
            if(*(nums+i) + *(nums+j) == target){
                *p = i;
                *(p+1) = j;
            }
        }
    }
    return p;
}

int main(){
    int nums[] = {2,7,11,15};
    int target = 9;
    int *p = NULL;
    
    p = twoSum(nums, sizeof(nums)/sizeof(int), target);
    
    printf("==%d ==%d\n", p[0],p[1]);
    
    if(p != NULL)
        free(p);
    
    return 0;
}
