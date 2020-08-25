// container_with_most_water.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include"container_with_most_water.h"

int Solution::maxArea1(vector<int>& height) {

    // 时间复杂度为O(N^2)

    int maxarea = 0;

    // 建立双指针 i , j 
    // 指针 i 指向数组里面第一个数字 随后移动到下一个
    for (int i = 0; i < height.size(); i++) {
        // 指针 j 指向数组里面第二个数字 随后移动到下一个
        for (int j = i + 1; j < height.size(); j++) {
            // 取 i 和 j 最小的数值（长方形的宽）与 j 和 i 的差（长方形的长）相乘 得出面积
            // 将所有的面积计算出后 返回最大的面积
            maxarea = fmax(maxarea, fmin(height[i], height[j]) * (j - i));
        }
    }
    return maxarea;
}

int Solution::maxArea2(vector<int>& height) {

    // 时间复杂度为O(N)

    int maxarea = 0;

    // 建立两个指针 i , j 分别指向图中的柱子
    // 指针 i 指向数组里面第一个柱子 随后移到下一个
    // 指针 j 指向数组里面最后一个柱子 size-1是因为 size为数组大小，值为整个数组元素+1

    for (int i = 0, j = height.size() - 1; i < j;) {

        // 取得两个柱子中最短的那个 然后进行 

        /* 使用了三元条件运算符 
           Condition  xxx  ？ true : fasle */   
        int minHight = height[i] < height[j] ? height[i++] : height[j--];
        // 取得最短柱子之后进行面积计算， 长度为柱子 j 减去 i +1， 因为i是最左端，需要+1来计算右边的面积
        // 例如第一次遍历中 j = 8， 而 i = 0，但是需要计算的面积长度应该为7， 则 i + 1 得到7，以此类推
        int area = minHight * (j - i + 1);
        // 取得最大面积
        maxarea = fmax(maxarea, area);
    }

    return maxarea;
}

int main()
{
    std::cout << "Hello World!\n";
    vector<int> height;
    height.push_back(1);
    height.push_back(8);
    height.push_back(6);
    height.push_back(2);
    height.push_back(5);
    height.push_back(4);
    height.push_back(8);
    height.push_back(3);
    height.push_back(7);
    Solution sol;
    cout << sol.maxArea2(height);
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
