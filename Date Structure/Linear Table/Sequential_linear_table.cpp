//Author: 崔小葵
//Date: 2020-12-12 17:17:51
//Last Modified by: 崔小葵
//Last Modified time: 2020-12-12 17:17:51

// InitList(*L);初始化操作，建立一个空的线性表L
// ListEmpty(L);若线性表为空，返回true，否则返回false
// ClearList(*L);将线性表清空
// GetElem(L, i, *e);将线性表L中的第i个位置返回给e
// LocateElem(L, e);在线性表L中查找给定值e相等的元素，如果查找成功，返回该元素在表中序号表示成功

#include <iostream>

using namespace std;

#define MAXSIZE 20
#define FALSE 0
#define TRUE 1

typedef int ElemType;
typedef int Status;
typedef struct Sequential_linear_table
{
    ElemType date[MAXSIZE];
    int length;
}SqList;

Status GetElem(SqList L, int  i, ElemType *e){
    if (L.length == 0 || i < 1)
    {
        return FALSE;
    }
    *e = L.date[i - 1];
    return TRUE
}

Status ListInsert(SqList *L, int i, ElemType e){

}