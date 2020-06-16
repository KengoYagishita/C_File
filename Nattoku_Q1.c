/*
    納得C言語[第16回]練習問題1
*/

#include <stdio.h>
#include <string.h> //strcmp、strncmp関数を使うために必要

FILE *fp; // ファイル型のオブジェクトへのポインタ
char *str[2048];
char *end = "end";

int main(void)
{
    fp = fopen("exercise1.txt", "w"); // テキストファイルを書き込みモードでオープン
    // エラー時はメッセージを表示
    if(fp == NULL) {
        printf("ファイルを開くことができませんでした。\n");
        return -1;
    }

    // 「end」が入力されるまで無限ループ
    while (1) {
        printf("ファイルに書き込む文章を入力してください。\n");
        scanf("%s", &str);
        // str と end が同じ値なら終了
        if(strcmp(str, end) == 0) {
            printf("ファイル書き込みを終了します。\n");
            break; // 無限ループ終了
        } else {
            fputs(str,fp);
            printf("ファイルに書き込みしました。\n");
        }
    }
    fclose(fp);

    return 0;
}