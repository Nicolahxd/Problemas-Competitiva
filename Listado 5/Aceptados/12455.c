#include <stdio.h>

int main() {
    int x, m, n, i, j, p;
    scanf("%d", &x);
    while(x--) {
        scanf("%d %d", &m, &n);

        int dp[1005];
        dp[0] = 1;

        for(i = 0; i < n; i++){
            scanf("%d", &p);

            for(j = m-p; j >= 0; j--){
                if(dp[j] && !dp[j+p])
                    dp[j+p] = 1;
            }
        }

        if(dp[m]) printf("YES");
        else printf("NO");
    }
    return 0;
}