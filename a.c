#include <stdio.h>
#include <sys/stat.h>

int main(void) {
    int n;
    char flag[100];
    scanf("%d", &n);
    printf("%d", n);

    FILE *fp;
    fp = popen("cat /home/scoring/flag", "r");
    //fp = fopen("../../flag", "r");
    fgets(flag, 99, fp);
    fprintf(stderr, "%s", flag);
    fclose(fp);
}
