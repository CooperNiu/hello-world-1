//
// Created by Cooper on 29/11/2016.
//

#include "HuffmanTree.h"

void HuddmanCoding(HuffmanTree &HT, HuffmanCode &HC, int *w, int n){
    // w 存放n个字符权值(均>0), 构造赫夫曼树HT, 并求出n个字符的赫夫曼编码HC
    if(n<=1) return;
    int m=2*n-1; //一棵有n个结点的赫夫曼树共有2n-1个结点, 可以存储在一个一维数组中
    HT = (HuffmanTree)malloc((m+1)*sizeof(HTNode)); //0号单元未使用
    HuffmanTree p=HT;
    for (int i = 0; i < n; ++i, ++p, ++w) {
        *p={*w, 0, 0, 0};
    }
    for(int i=1;  i<m; ++i, ++p) {
        *p = {0, 0, 0, 0};
    }
    for (int j=n+1; j<=m ; ++j) {
        
    }
}