//
// Created by Administrator on 2023/3/19.
//
//假设商店中有 3 种商品，它们各自的重量和收益是：
//商品 1：重量 10 斤，收益 60 元；
//商品 2：重量 20 斤，收益 100 元；
//商品 3：重量 30 斤，收益 120 元。
//
//对于每件商品，顾客可以购买商品的一部分（可再分）。一个小偷想到商店行窃，他的背包最多只能装 50 斤的商品，如何选择才能获得最大的收益呢？
//
//贪心算法解决此问题的思路是：计算每个商品的收益率（收益/重量），优先选择收益率最大的商品，直至所选商品的总重量达到 50 斤。

#include <stdio.h>
#define N 3    //设定商品数量
//根据收益率，对记录的商品进行从大到小排序
void Sort(float w[], float p[]) {
    int i,j;
    float temp;
    float v[N] = { 0 };
    //用v[]存商品的收益率
    for (i = 0; i < N; i++)
        v[i] = p[i] / w[i];
    //根据 v 数组记录的各个商品收益率的大小，同时对 w 和 p 数组进行排序
    for (i = 0; i < N; i++) {
        for (j = i + 1; j < N; j++) {
            if (v[i] < v[j]) {
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
                temp = w[i];
                w[i] = w[j];
                w[j] = temp;
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
}
/*贪心算法解决部分背包问题
w：记录各个商品的总重量
p：记录各个商品的总价值
result：记录各个商品装入背包的比例
W：背包的容量
*/
void fractional_knapsack(float w[], float p[], float result[], float W) {
    float temp = 0;
    int i = 0;
    //根据收益率，重新商品进行排序
    Sort(w, p);
    //从收益率最高的商品开始装入背包，直至背包装满为止
    while (W > 0) {
        temp = W > w[i] ? w[i] : W;
        result[i] = temp / w[i];
        W -= temp;
        i++;
    }
}

int main() {
    int i;
    //统计背包中商品的总收益
    float values = 0;
    //各个商品的重量
    float w[N] = { 10,30,20 };
    //各个商品的收益
    float p[N] = { 60,100,120 };
    float result[N] = { 0 };
    //调用解决部分背包问题的函数
    fractional_knapsack(w, p, result, 50);
    //根据 result 数组中记录的数据，决定装入哪些商品
    for (i = 0; i < N; i++) {
        if (result[i] == 1) {
            printf("总重量为 %f,总价值为 %f 的商品全部装入\n", w[i], p[i]);
            values += p[i];
        }
        else if (result[i] == 0)
            printf("总重量为 %f,总价值为 %f 的商品不装\n", w[i], p[i]);
        else {
            printf("总重量为 %f,总价值为 %f 的商品装入 %f%%\n", w[i], p[i], result[i] * 100);
            values += p[i] * result[i];
        }
    }
    printf("最终收获的商品价值为 %.2f\n", values);
    return 0;
}