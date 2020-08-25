// climbing_stairs.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include"climbing_staris.h"

// 使用斐波拉契数列解决 
// f(n) = f(n-1)+f(n-2)

int Solution::climbStairs1(int n) {

        // 时间复杂度为O(x^N)

        if (n == 1) {
            return 1;
        }
        else if (n == 2) {
            return 2;
        }
        // 利用递归 进行暴力斐波拉契数列求解
        else {
            return climbStairs1(n - 1) + climbStairs1(n - 2);
        }
    
}


int Solution::climbStairs2(int n) {

    // 时间复杂度为O(N)


    int z;

    if (n <= 2) {
        return n;
    }
    else {
        // 由于只有三种情况， 所以建立两个数值，随后用for循环来进行叠加
        int x = 1;
        int y = 2;

        for (int i = 3; i <= n; ++i) {
            z = x + y;
            x = y;
            y = z;
        }
    }
    return z;
}


int main()
{
    std::cout << "Hello World!\n";
    Solution sol;
    cout<< sol.climbStairs2(8);
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
