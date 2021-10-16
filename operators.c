#include <stdio.h>

int main()
{
    //AND
    char x = 1, y = 2; // x = 0000 0001, y = 0000 0010

    if(x&y) // 0000 0001 & 0000 0010 = 0000 0000
        printf("x&y is TRUE\n");
    else
        printf("x&&y is FALSE\n");
    
    if(x&&y) // 0000 0001 && 0000 0010 = 0000 0011 (not decimal 0)
        printf("x&&y is TRUE\n");
    else
        printf("x&&y is FALSE\n");

    // left shifts
    char var = 3; //0000 0011
    printf("%d\n", var<<1); //0000 0110

    // right shift
    var = 6; //0000 0110
    printf("%d\n", var>>1); //0000 0011

    return 0;
}