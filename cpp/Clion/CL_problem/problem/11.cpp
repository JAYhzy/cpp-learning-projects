//
// Created by Administrator on 2023/8/17.
//
#include <iostream>
#include <vector>

const int MAX_DIGITS = 10000;  // 最大位数
const int BASE = 10;           // 进制

void multiply(std::vector<int> &number, int factor) {
    int carry = 0;
    for (int i = 0; i < number.size(); ++i) {
        int product = number[i] * factor + carry;
        number[i] = product % BASE;
        carry = product / BASE;
    }
    while (carry > 0) {
        number.push_back(carry % BASE);
        carry /= BASE;
    }
}

void printNumber(const std::vector<int> &number) {
    for (int i = number.size() - 1; i >= 0; --i) {
        std::cout << number[i];
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> sum(MAX_DIGITS, 0);
    sum[0] = 1;  // 初始化为 1

    for (int i = 1; i <= 202320232023; ++i) {
        multiply(sum, i);
    }

    std::cout << "Sum of factorials from 1! to 202320232023! = ";
    printNumber(sum);

    return 0;
}
