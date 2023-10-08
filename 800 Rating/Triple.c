#include <stdio.h>

int main()
{
  int t;
  scanf("%d", &t);

  while (t--)
  {
    int n;
    scanf("%d", &n);

    
    int a[n];
    int img[200001] = {0};

    for (int i = 0; i < n; i++)
    {
      scanf("%d", &a[i]);
      img[a[i]]++;
    }

    int found = 0;
    for (int i = 1; i <= n; i++)
    {
      if (img[i] >= 3)
      {
        printf("%d\n", i);
        found = 1;
        break;
      }
    }

    if (found==0)
    {
      printf("-1\n");
    }
  }

  return 0;
}
