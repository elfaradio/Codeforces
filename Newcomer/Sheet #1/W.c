#include <stdio.h>

void validate(int result, int answer)
{
    if (answer == result)
    {
        printf("Yes\n");
    }
    else
    {
        printf("%d\n", answer);
    }
}

int main()
{
    int x, y, result;
    char c1, c2;
    int answer = 0;

    scanf("%d %c %d %c %d", &x, &c1, &y, &c2, &result);

    switch (c1)
    {
    case '+':
        answer = x + y;
        validate(result, answer);
        break;
    case '-':
        answer = x - y;
        validate(result, answer);
        break;
    case '*':
        answer = x * y;
        validate(result, answer);
        break;
        }

    return 0;
}
