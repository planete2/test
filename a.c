#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d", n);

    FILE *fp;
    fprintf(stderr, "%s", "hello, world");
    fp = fopen("../../flag", "r");
    fclose(fp);
}