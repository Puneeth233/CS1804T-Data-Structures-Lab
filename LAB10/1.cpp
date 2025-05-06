#include<cstdio>
#include<cstdlib>
#include<cstdbool>

#define MAX_N 200000

void solve()
{
    int n;
    printf("Enter the length of the sequence:\n");
    scanf("%d", &n);
    int *a= (int *) malloc(n* sizeof(int));

    bool seen[MAX_N+1] = {false};
    printf("Enter the number in the sequence:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    int remove_count = 0;
    for(int i= n - 1; i >= 0; i--)
    {
        if(seen[a[i]])
        {
            break;
        }
        seen[a[i]] = true;
        remove_count++;
    }
    printf("%d\n", n-remove_count);
    free(a);
}

int main()
{
    int t;
    printf("Enter the no of test cases:\n");
    scanf("%d", &t);
    while(t--)
    {
        solve();
    }
    return 0;
}