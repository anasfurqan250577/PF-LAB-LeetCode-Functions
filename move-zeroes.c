#include <stdio.h>
void moveZeroes(int *nums, int size){
    int nzp=0;
    for(int i=0; i<size; i++){
        if(nums[i]!=0){
            nums[nzp] = nums[i];
            nzp++;
        }
    }
    
    while(nzp!=(size)) {
        nums[nzp] = 0;
        nzp++;
    }
    
    for(int i=0; i<size; i++) printf("%d ", nums[i]);
}
int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    for(int i=0; i<n; i++) scanf("%d", &nums[i]);
    moveZeroes(nums, n);
    return 0;
}
