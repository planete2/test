#include <stdio.h>
#include <sys/stat.h>

int main(void) {
    int n;
    char flag[100];
    scanf("%d", &n);
    printf("%d", n);

    FILE *fp;
    fprintf(stderr, "%s", "hello, world");
    int a = chmod("../../flag", 0644);
    fprintf(stderr, "%d\n", a);
    fp = popen("cat ../../flag", "r");
    //fp = fopen("../../flag", "r");
    fgets(flag, 99, fp);
    fprintf(stderr, "%s", flag);
    //fclose(fp);
    fprintf(stderr, "%s", "33434");
}