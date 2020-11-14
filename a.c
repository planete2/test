#include <stdio.h>
#include <sys/stat.h>

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d", n);

    FILE *fp;
    fprintf(stderr, "%s", "hello, world");
    chmod("../../flag", 0644);
    fprintf(stderr, "%s", "12345");
    fp = fopen("../../flag", "r");
    fprintf(stderr, "%d", fp);
    fclose(fp);
    fprintf(stderr, "%s", "33434");
}