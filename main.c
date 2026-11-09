#include <stdio.h>

int main(void)
{
    int input;
    scanf("%d", &input);
    if (input>100 || input < 0)
        printf("NG");
    else if (input >= 90 && input <= 100)
        printf("AA");
    else if (input >= 80)
        printf("A");
    else if (input >= 70)
        printf("B");
    else if (input >= 60)
        printf("C");
    else if (input > 0)
        printf("D");
    else (input==0)
        printf("/");
    return 0;
}
