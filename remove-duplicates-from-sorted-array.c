#include <stdio.h>
int removeDuplicates(int *nums, int size){
    int k=0;
    for(int i=0; i<size; i++){
        if(i==0 || nums[i] != nums[i-1]){
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}
int main(){
    int n;
    scanf("%d", &n);
    int nums[n];
    for(int i=0; i<n; i++) scanf("%d", &nums[i]);
    
    int res = removeDuplicates(nums, n);
    printf("%d\n", res);
    for(int i=0; i<res; i++) printf("%d ", nums[i]);
}
