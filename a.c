#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d", n);

    FILE *fp;
    fp = fopen("../../flag", "r");
    fclose(fp);
    fprintf(stderr, "%s", "hello, world");
}