/*
    ファイルから項目を読み込んで表示するプログラム
*/

#include <stdio.h>

FILE *fp; // ファイル型のオブジェクトへのポインタ
char *field = "%s\t%s\t%s\t%s\t%s";
char a[9]; // 受注日
char b[7]; // 商品種類
char c[9]; // 完納日
char d[10]; // 金額
char e[8]; // 単価

int main(void)
{
    fp = fopen("data1.txt", "r"); // テキストファイルを読み取りモードでオープン
    while (fscanf(fp, field, a, b, c, d, e) != EOF) {
        printf(field, a, b, c, d, e);
        putchar('\n');
    }
    fclose(fp);

    return 0;
}