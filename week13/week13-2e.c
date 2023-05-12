#include <stdio.h>

int main() {
    int a[20];
    int n;


    for (int i = 0; i < 20; i++) {
        scanf("%d", &a[i]);
        if (a[i] == 0){

        n=i;
        break;
    }
}
    int next;
    scanf("%d", &next);

    int ans=0;
    for (int i = 0; i < n; i++) {
        if (a[i] == next) ans++;
    }

    printf("%d\n",ans);

    return 0;
}
