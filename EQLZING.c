#include <stdio.h>

int main()
{
    int test_case;
    scanf("%d", &test_case);
    while (test_case)
    {
        int num1, num2;
        scanf("%d %d", &num1, &num2);
        if (((abs(num1 - num2)) % 2 == 0) ? printf("Yes\n") : printf("No\n"));
        test_case--;
    }
    return 0;
}

