#include <stdio.h>
int main()
{
    char c;
    int num;
    scanf("%d", &num);
    while(getchar() != '\n') ; /* need to read the rest of the line, make sure starting from a new line later */

    for(int i = 0; i < num; i++)
    {
        /* three numbers to count number of As: before P, between P&T and after T */
        int pos = 0, count[3] = {0, 0, 0};
        while((c = getchar()) != '\n')
        {
            if(c == 'A')                    count[pos]++;
            else if(c == 'P' && pos == 0)   pos = 1;        /* should have only one P and only before T */
            else if(c == 'T' && pos == 1)   pos = 2;        /* should have only one T and only after P */
            else                            break;          /* 'wrong' string */
        }

        if(c == '\n' && pos == 2                            /* correct appearance of P and T, no other chars */
         && count[1] && count[2] == count[1] * count[0])    /* relation between three groups of As */
            puts("YES");
        else
            puts("NO");

        if(c != '\n') while((c = getchar()) != '\n'); /* still, read the whole line */
    }
    return 0;
}

