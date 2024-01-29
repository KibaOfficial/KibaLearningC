#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int age_jan = 28;
    int age_marc = 30;
    int age_sarah = 27;

    bool in_jan_the_youngest = age_jan < age_marc && age_jan < age_sarah;
    bool is_marc_the_youngest = age_marc < age_jan && age_marc < age_sarah;
    bool is_sarah_the_youngest = age_sarah < age_jan && age_sarah < age_marc;

    if (in_jan_the_youngest)
    {
        printf("Jan is the youngest.\n");
    }
    else if (is_marc_the_youngest)
    {
        printf("Marc is the youngest.\n");
    }
    else if (is_sarah_the_youngest)
    {
        printf("Sarah is the youngest.\n");
    }
    else
    {
        printf("Jan, Marc and Sarah have the same age.\n");
    }
    return 0;
}