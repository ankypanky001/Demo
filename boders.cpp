#include <stdio.h>

int max(int a, int b){
    return a>b ? a : b;
} 

int main() {

    int t;

    scanf("%d", &t);
 

    while (t--) {

        int n, m;

        scanf("%d" "%d", n, m);

 

        char arr[n][m];
 


        int ans = 0;

        for (int i = 0; i < n; ++i) {

            int cnt = 0;

            for (int j = 0; j < m; ++j) {

                scanf("%d", arr[i][j]);

                cnt += arr[i][j] == '#';

            }

            ans = max(ans, cnt);

        }

        printf("%d",ans);

    }

}