#include "keym.h"

const KeyM_KeyElemType KeyElemTbl_0[3] =
{
    {
        /* keyElementId */ 0,
        /* keyData      */ "AAABAAAA"
    },
    {
        /* keyElementId */ 1,
        /* keyData      */ "FFFFFFFF"
    },
    {
        /* keyElementId */ 2,
        /* keyData      */ "ABCDEFGH"
    }
};

const KeyM_KeyElemType KeyElemTbl_1[2] =
{
    {
        /* keyElementId */ 3,
        /* keyData      */ "AAACAAAA"
    },
    {
        /* keyElementId */ 4,
        /* keyData      */ "FFFEFFFF"
    }
};

const KeyM_KeyDataType KeyDataTbl[3] =
{
    {
        /* keyId           */  0,
        /* keyName         */  "keyName0",
        /* keyElemTblRef   */  &KeyElemTbl_0[0]
    },
    {
        /* keyId           */  1,
        /* keyName         */  "keyName1",
        /* keyElemTblRef   */  &KeyElemTbl_0[1]
    },
    {
        /* keyId           */  2,
        /* keyName         */  "keyName2",
        /* keyElemTblRef   */  KeyElemTbl_1
    }
};



const KeyM_KeyElemType* Key_Type0[2] =
{
    &KeyElemTbl_0[1],
    &KeyElemTbl_1[0]
};


const KeyM_KeyDataExtendType KeyDataExntedTbl[] =
{
    {
        /* keyId            */  30,
        /* keyName          */  "keyNameX",
        /* keyTypeRef       */  &Key_Type0[0],
        /* keyElemTblRefCnt */  sizeof(Key_Type0[0])/sizeof(Key_Type0)
    }
};
