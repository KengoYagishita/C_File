/*
    納得C言語[第16回]練習問題2
*/

#include <stdio.h>
#include <string.h> //strcmp、strncmp関数を使うために必要

FILE *fp; // ファイル型のオブジェクトへのポインタ
char str[1024];

int main(void)
{
    fp = fopen("exercise1.txt", "r"); // テキストファイルを読み込みモードでオープン
    // エラー時はメッセージを表示
    if(fp == NULL) {
        printf("ファイルを開くことができませんでした。\n");
        return -1;
    }

    // fgetsの戻り値がNULLになるまで、読み込みを続ける
    while (fgets(str,256,fp) != NULL) {
        // strに格納された文字を出力
        printf("%s", str);
    }
    fclose(fp);

    return 0;
}