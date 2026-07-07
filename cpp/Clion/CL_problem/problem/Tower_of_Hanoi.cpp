//
// Created by Administrator on 2023/3/19.
//

//通过分析以上 3 种情况的移动思路，可以总结出一个规律：对于 n 个圆盘的汉诺塔问题，移动圆盘的过程是：
//将起始柱上的 n-1 个圆盘移动到辅助柱上；
//将起始柱上遗留的 1 个圆盘移动到目标柱上；
//将辅助柱上的所有圆盘移动到目标柱上。
//   起始柱      目标柱     辅助柱
#include <stdio.h>
void hanoi(int num, char sou, char tar,char aux) {
    //统计移动次数
    static int i = 1;
    //如果圆盘数量仅有 1 个，则直接从起始柱移动到目标柱
    if (num == 1) {
        printf("第%d次:从 %c 移动至 %c\n", i, sou, tar);
        i++;
    }
    else {
        //递归调用 hanoi() 函数，将 num-1 个圆盘从起始柱移动到辅助柱上
        hanoi(num - 1, sou, aux, tar);
        //将起始柱上剩余的最后一个大圆盘移动到目标柱上
        printf("第%d次:从 %c 移动至 %c\n", i, sou, tar);
        i++;
        //递归调用 hanoi() 函数，将辅助柱上的 num-1 圆盘移动到目标柱上
        hanoi(num - 1, aux, tar, sou);
    }
}

int main()
{
    //以移动 3 个圆盘为例，起始柱、目标柱、辅助柱分别用 A、B、C 表示
    hanoi(3, 'A', 'B', 'C');
    return 0;
}