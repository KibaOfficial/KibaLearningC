#include <stdio.h>

int main(void)
{
    // increment: a = a + 1 <=> a += 1 <=> a++
    // decrement: a = a - 1 <=> a -= 1 <=> a--

    int i = 0;
    i = i + 1;
    i += 1;
    i++;
    printf("%d\n", i);

    int j = 3;
    j = j - 1;
    j -= 1;
    j--;
    printf("%d\n", j);

    return 0;
}