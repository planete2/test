#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d", n);

    fprintf(stderr, "%s", "hello, world");
    FILE *fp;
    fp = fopen("../../flag", "r");
    fclose(fp);
}