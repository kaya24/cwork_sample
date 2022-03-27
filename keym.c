#include "keym.h"


static void example_1(void);
static void example_2(void);
static void example_3(void);

int main()
{

    /* 
        例題１〜例題３を用意しました
    */
    example_1();
    example_2();
    example_3();

    /* 問題１：KeyElemTbl_0[0]のkeyElementIdをprintfで表示するプログラムを作成してください*/
    
    /* 問題２-１：KeyElemTbl_0[0]のkeyDataの文字列をprintfで表示するプログラムを作成してください*/
    
    /* 問題２-２KeyElemTbl_0[0]のkeyDataの3番目の文字だけをprintfで表示するプログラムを作成してください*/
    
    /* 問題３：KeyDataTbl[0]の構造体メンバkeyElemTblRefから，keyElementId=0　をprintfで表示するプログラムを作成してください */

    /* 問題４：KeyDataTbl[0]の構造体メンバkeyElemTblRefから，keyElementId=1　をprintfで表示するプログラムを作成してください */

    /* 問題５：KeyDataTbl[2]の構造体メンバkeyElemTblRefから，keyElementId=4  をprintfで表示するプログラムを作成してください */
        
    return 0;
}

static void example_1(void)
{
    /*
        処理中に自由に書き換えられる値を変数といいます．
        const宣言した変数を「定数」といいます
        定数は，処理中に値を変更しないので，実装では最初から「初期値」を入れるルールがあります
        変数と定数の違いを簡単に確認するプログラムが下記です
    */

    /* 変数と定数の宣言 */
    int hensuu = 0;
    const int teisuu = 0;

    /* 変数の書き換え　*/
    hensuu = 1;

    /* 定数の書き換え */
    //teisuu = 1; 

    /* ↑　コンパイルエラーになる */  
    /* teisuuは，constがついてるため，関数内で値を変更できない */
    
    /* 
        constを付与した変数は，変数の宣言で同時に「初期値」を必ず入れなければならないため，
        変数と定数の宣言時に，teisuuに0を入れています．（これを省くとコンパイルエラーになります）
        hensuuは，宣言と同時に初期値を入れる必要はないです．
        （ただし，初期値を省略すると，何が入っているのかわからない値を以降の処理で使ってしまうリスク（バグを仕込む）が生まれるため，
        　初期値は何を使用するのかを意識してコーディングする癖をつけたほうがよい．）
    */

    return ;
}

static void example_2(void)
{
    KeyM_KeyElemType kouzoutai = {0, "1234567"}; 
    /* 
        上記で初期値を入れた構造体変数「kouzoutai」の構造体メンバを下記のように変更するプログラムを書いてみてください
        kouzoutai.keyElementId　：　1　→　99
        kouzoutai.keyData  ：　"12345678"　→　"87654321"
        
        注意）char型の配列であるkouzoutai.keyDataは，配列要素数は８で，初期値に入れているのは７文字にしている．
             char型の配列は，変数宣言と同時に初期値を入れると文字列の最後に「終端文字（\0）」が含まれるためです．
    */

    #if 1   /* 変更するプログラム */

        /* 
            kouzoutai.keyElementId　：　１　→　９９ 
        */


        /* -----  ここにコードを書く　------ */


        /* 
            kouzoutai.keyData  ：　"12345678"　→　"87654321" 
            ヒント）
                kouzoutai.keyData = "87654321" は記述エラーになります．
                文字列を代入するのではなく，「文字列をコピーする」方法を調べてみてください
        */
        

        /* -----  ここにコードを書く　------ */




        /* 
            変更した値を確認するプログラム 
            %dではなく，%sを使うと「文字列」を表示することができる
        */
        printf("例題２　表示プログラム　開始\n");       
        printf("kouzoutai.keyElementId = %d\n", kouzoutai.keyElementId);
        printf("kouzoutai.keyElementId = %s\n", kouzoutai.keyData);
        printf("例題２　表示プログラム　終了\n");       

    #endif

    return ;
}


static void example_3(void)
{
    /*
        keym_cfg.c に記載している　KeyElemTbl_0[3]の構造を解説します．

        例題２で使用した
             KeyM_KeyElemType kouzoutai = {0, "1234567"}; 
        を改行してコメントをつけて読みやすく書き直すと下記のようになる．
    */
    #if 0
    KeyM_KeyElemType kouzoutai = 
    {
            0,              /* keyElementId */
            "1234567"       /* keyData      */
    };    
        /* 
            値が変わるとインデントがずれるので，
            コメントを前に持ってきた形が，keym_cfg.cに記載している構造体になる 
        */
    #endif    


    /*
        KeyElemTbl_0[3]　は，丁寧に書くと下記のようになります．
        ここでは，変数名が重複しないように,KeyElemTbl_0[3] を KeyElemTbl_sample[3]とします．
    */

    /* KeyElemTbl_sample[3] の要素を３つすべて宣言する　*/
    const KeyM_KeyElemType KeyElem_Data_0 =
    {
            /* keyElementId */ 0,
            /* keyData      */ "AAABAAAA"    
    };

    const KeyM_KeyElemType KeyElem_Data_1 =
    {
            /* keyElementId */ 1,
            /* keyData      */ "FFFFFFFF"
    };
        
    const KeyM_KeyElemType KeyElem_Data_2 =
    {
            /* keyElementId */ 2,
            /* keyData      */ "ABCDEFGH"
    };
    
    /* KeyElem_Data_0, KeyElem_Data_1, KeyElem_Data_2 を合体させると下記のようになる．*/
    const KeyM_KeyElemType KeyElemTbl_sample[3] =
    {
        KeyElem_Data_0,
        KeyElem_Data_1,
        KeyElem_Data_2
    };
    /* 
        ↑　これはKeyElemTbl_0[3]と実質同じ．
        ↑　各要素を用意するのを省略した形が，KeyElemTbl_0[3] です 
    */
    
    return ;
}