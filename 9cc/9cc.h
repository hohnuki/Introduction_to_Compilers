//
// Created by 大貫　弘貴 on 2022/08/13.
//

#ifndef INTRODUCTION_TO_COMPILERS_9CC_H
#define INTRODUCTION_TO_COMPILERS_9CC_H

#include <ctype.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// トークンの種類
typedef enum {
	TK_RESERVED, // 記号
	TK_NUM,      // 整数トークン
	TK_EOF,      // 入力の終わりを表すトークン
} TokenKind;

typedef struct Token Token;

// トークン型
struct Token {
	TokenKind kind; // トークンの型
	Token *next;    // 次の入力トークン
	int val;        // kindがTK_NUMの場合、その数値
	char *str;      // トークン文字列
};

#endif //INTRODUCTION_TO_COMPILERS_9CC_H
