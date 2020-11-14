#include <stdio.h>
#include <sys/stat.h>

int main(void) {
    int n;
    char flag[100];
    scanf("%d", &n);
    printf("%d", n);

    FILE *fp;
    fprintf(stderr, "%s", "hello, world");
    chmod("../../flag", 0644);
    fprintf(stderr, "%s", "12345");
    fp = fopen("../../flag", "r");
    //fgets(flag, 99, fp);
    //fprintf(stderr, "%s", flag);
    //fclose(fp);
    fprintf(stderr, "%s", "33434");
}