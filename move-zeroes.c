#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n], nzp=0;
    for(int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }
    
    for(int i=0; i<n; i++){
        if(nums[i]!=0){
            nums[nzp] = nums[i];
            nzp++;
        }
    }
    
    while(nzp!=(n)) {
        nums[nzp] = 0;
        nzp++;
    }
    
    for(int i=0; i<n; i++) printf("%d ", nums[i]);
    
    return 0;
}
