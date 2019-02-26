#include <cstdio>
#include <math.h>
const int maxn = 11;

int n, P[maxn], hashTable[maxn] = { false }; //P为当前排列，hashTable记录整数x是否已经在P中
int count = 0;

void generateP(int index) {

    //递归边界，生成一个排列
    if (index == n + 1) {
        bool flag = true; //flag为true表示当前排列为一个合法方案
        //遍历任意两个皇后
        for (int i = 1; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) {
                //如果在一条对角线上
                if (abs(i - j) == abs(P[i] - P[j]))
                    flag = false; //不合法
            }
        }
        if (flag)
            count++;
        return;
    }

    for (int x = 1; x <= n; x++) {
        if (hashTable[x] == false) {
            P[index] = x;
            hashTable[x] = true;
            generateP(index + 1);
            hashTable[x] = false;
        }
    }
}

int main() {
    while (scanf("%d", &n) != EOF) {
        count = 0;
        generateP(1);
        printf("%d\n", count);
    }
    return 0;
}