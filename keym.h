#ifndef keym_h
#define keym_h

/* include files */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* 鍵データを構成するための鍵要素データ構造体 */
typedef struct
{
    int keyElementId;
    char keyData[8];
}KeyM_KeyElemType;

/* 鍵データ構造体（シンプル版）*/
typedef struct
{
    int keyId;
    char keyName[20];
    const KeyM_KeyElemType* keyElemTblRef;
}KeyM_KeyDataType;

/* 鍵データ構造体（発展版）*/
typedef struct
{
    int keyId;
    char keyName[20];
    const KeyM_KeyElemType** keyTypeRef;
    int keyElemTblRefCnt;
}KeyM_KeyDataExtendType;


/*  テーブル変数の外部公開宣言 */
extern const KeyM_KeyElemType KeyElemTbl_0[3];
extern const KeyM_KeyElemType KeyElemTbl_1[2];
extern const KeyM_KeyDataType KeyDataTbl[3];

extern const KeyM_KeyElemType* Key_Type0[2];
extern const KeyM_KeyDataExtendType KeyDataExntedTbl[1];



#endif /* keym_h */
