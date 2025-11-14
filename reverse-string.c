#include <stdio.h>
#include <string.h>
void reverseString(char *s, int size){
    for(int i=0,j=size-1; i<size; i++, j--){
        printf("%c",s[j]);
    }
}
int main(){
    char s[20];
    scanf("%s", s);
    reverseString(s, strlen(s));
}
