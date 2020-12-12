//Author: 崔小葵
//Date: 2020-12-12 17:17:51
//Last Modified by: 崔小葵
//Last Modified time: 2020-12-12 17:17:51

// InitList(*L);初始化操作，建立一个空的线性表L
// SetList(*L);在线性表中添加元素
// ListEmpty(L);若线性表为空，返回true，否则返回false
// ClearList(*L);将线性表清空
// GetElem(L, i, *e);将线性表L中的第i个位置返回给e
// LocateElem(L, e);在线性表L中查找给定值e相等的元素，如果查找成功，返回该元素在表中序号表示成功
// ListInsert(*L, i, e);在线性表L中第i个位置插入元素e
// ListDelete(*L, i, *e);在线性表L中第i个位置删除元素e
// ShowList(L);将线性表的全部元素都打印出来

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
} SqList;

Status InitList(SqList *L);
Status SetList(SqList *L, ElemType e);
Status ListEmpty(SqList L);
Status ClearList(SqList *L);
Status GetElem(SqList L, int i, ElemType *e);
Status LocateElem(SqList L, int e);
Status ListInsert(SqList *L, int i, ElemType e);
Status ListDelete(SqList *L, int i, ElemType *e);
Status ShowList(SqList *L);

int main()
{
    SqList L;
    ElemType choice_switch, i, e;
    cout << "Please input your choice (1 ~ 9): ";
    cin >> choice_switch;
    while (choice_switch >= 1 || choice_switch <= 9 && choice_switch)
    {
        switch (choice_switch)
        {
        case 1:
            if (InitList(&L))
            {
                cout << "Initialized Successfully!" << endl;
            }
            else
            {
                cout << "Initialized Fail!" << endl;
            }
            break;
        case 2:
            cout << "Input the length of Sequential Table: ";
            cin >> e;
            SetList(&L, e);
            break;
        case 3:
            if (!ListEmpty)
            {
                cout << "List is Empty!" << endl;
            }
            else
            {
                cout << "List has " << L.length << " Elements!" << endl;
            }

            break;
        case 4:
            if (ClearList(&L))
            {
                cout << "The element has initialized to 0!" << endl;
            }
            else
            {
                cout << "Initialized Fail!" << endl;
            }
            break;
        case 5:
            cout << "Input Place: ";
            cin >> i;
            if (GetElem(L, i, &e))
            {
                cout << "The value in " << i << " is "
                     << e << endl;
            }
            else
            {
                cout << "There's no such value!" << endl;
            }

            break;
        case 6:
            cout << "Which number do you want : ";
            cin >> e;
            if (LocateElem(L, e))
            {
                cout << "The number you input on " << LocateElem(L, e) + 1 << " place!" << endl;
            }
            else
            {
                cout << "There's no such number!" << endl;
            }
            break;
        case 7:
            cout << "Input Place and Value: ";
            cin >> i >> e;
            if (ListInsert(&L, i, e))
            {
                cout << "Insert value successfully!" << endl;
                ShowList(&L);
            }
            else
            {
                cout << "Fail!" << endl;
            }
            break;
        case 8:
            cout << "Input Place: ";
            cin >> i;
            if (ListDelete(&L, i, &e))
            {
                cout << "Delete value successfully!" << endl;
                ShowList(&L);
            }
            else
            {
                cout << "Fail!" << endl;
            }

            break;
        case 9:
            ShowList(&L);
        default:
            break;
        }
        cout << "Input next choice: ";
        cin >> choice_switch;
    }
    cout << "Bye!" << endl;
    system("pause");
    return 0;
}

Status InitList(SqList *L)
{
    L->length = 0;
    return TRUE;
}

Status SetList(SqList *L, ElemType e)
{
    for (size_t i = 0; i < e; i++)
    {
        cin >> L->date[i];
    }
    L->length = e;
    return TRUE;
}

Status ListEmpty(SqList L)
{
    return L.length == 0 ? TRUE : FALSE;
}

Status ClearList(SqList *L)
{
    for (size_t i = 0; i < L->length; i++)
    {
        L->date[i] = 0;
    }
    return TRUE;
}

Status GetElem(SqList L, int i, ElemType *e)
{
    if (L.length == 0 || i < 1 || i > L.length)
    {
        return FALSE;
    }
    *e = L.date[i - 1];
    return TRUE;
}

Status LocateElem(SqList L, int e)
{
    for (size_t i = 0; i < L.length; i++)
    {
        if (L.date[i] == e)
        {
            return i;
            break;
        }
    }
    return FALSE;
}

Status ListInsert(SqList *L, int i, ElemType e)
{
    int k;
    if (L->length == MAXSIZE)
    {
        return FALSE;
    }
    if (i < 1 || i > L->length + 1)
    {
        return FALSE;
    }
    if (i <= L->length)
    {
        for (k = L->length - 1; k >= i - 1; k--)
        {
            L->date[k + 1] = L->date[k];
        }
        L->date[i - 1] = e;
        L->length++;
    }
    return TRUE;
}

Status ListDelete(SqList *L, int i, ElemType *e)
{
    int k;
    if (L->length == 0)
    {
        return FALSE;
    }
    if (i < 1 || i > L->length)
    {
        return FALSE;
    }
    *e = L->date[i - 1];
    if (i < L->length)
    {
        for (k = i; k < L->length; k++)
        {
            L->date[k - 1] = L->date[k];
        }
        L->length--;
    }
    return TRUE;
}

Status ShowList(SqList *L)
{
    for (size_t i = 0; i < L->length; i++)
    {
        cout << L->date[i];
        if (i < L->length - 1)
        {
            cout << " -> ";
        }
    }
    cout << endl;
    return TRUE;
}