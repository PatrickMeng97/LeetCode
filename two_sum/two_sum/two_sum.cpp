﻿// two_sum.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include"two_sum.h"

vector<int>Solution:: twoSum(vector<int>& nums, int target) {
    int i = 0;
    int j = 0;
    // 暴力解法 时间复杂度为O(N^2)
    for (int i = 0; i < nums.size() -1; i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                return { i,j };
            }
        }
    }
    return { i,j };
}
int main()
{
    Solution sol;
    vector<int> a;
    a.push_back(2);
    a.push_back(7);
    a.push_back(11);
    a.push_back(15);
    a.push_back(28);
    std::cout << "Hello World!\n";

    cout << sol.twoSum(a, 30)[0] << endl;
    cout << sol.twoSum(a, 30)[1] << endl;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
