#define MAXSIZE 20
typedef int ElemType;

// 定义顺序存储结构的线性表
typedef struct
{
    ElemType data[MAXSIZE];  // 用数组存储元素
    int length;  // 当前线性表长度
}ArrayList;

// 注意： ArrayList 是结构体，LinkList 则是节点指针
