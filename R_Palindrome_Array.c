// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     int flag = 1;
//     int i = 0, j = n - 1;
//     while (i < j)
//     {
//         if (a[i] != a[j])
//         {
//             flag = 0;
//         }
//         i++;
//         j--;
//     }
//     if (flag == 0)
//     {
//         printf("NO\n");
//     }
//     else
//     {
//         printf("YES\n");
//     }
//     return 0;
// }

// using recursion

#include <stdio.h>
int fun(int a[], int i, int j)
{
    if (i >= j)
    {
        return 1;
    }
    if (a[i] != a[j])
    {
        return 0;
    }
    return fun(a, i + 1, j - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int ans = fun(a, 0, n - 1);
    if (ans)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}