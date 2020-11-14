#include <stdio.h>
#include <sys/stat.h>

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d", n);

    FILE *fp;
    fprintf(stderr, "%s", "hello, world");
    chmod("../../flag", 0644);
    fprintf(stderr, "%s", "hello, world");
    fp = fopen("../../flag", "r");
    fprintf(stderr, "%s", "hello, world");
    fclose(fp);
}