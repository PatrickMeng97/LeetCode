// move-zeros.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"move_zeroes.h"


void Solution :: moveZeroes1(vector<int>& nums) {


    //打印排序之前的数组
    cout << "Before" << endl;
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << endl;
    }
    cout << endl;
    // 建立两个指针， i 为快指针， j为慢指针
    for (int i = 0, j = 0; i < nums.size(); i++) {
        // 如果i指针所指数值不为0 则将i指针所指数值和j指针所指数值转换位置
        if (nums[i] != 0) {
            swap(nums[i], nums[j]);
            j++;
        }
    }

    //打印排序之后的数组
    cout << "After" << endl;
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << endl;
    }

}

void Solution::moveZeroes2(vector<int>& nums) {

    int j = 0;

    //打印排序之前的数组
    cout << "Before" << endl;
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << endl;
    }
    cout << endl;

    for (int i = 0; i < nums.size(); i++)
    {
        // 如果 i指针所指数值不为0 则交换j指针的数值
        if (nums[i] != 0)
        {
            int temp = nums[j];
            nums[j] = nums[i];
            nums[i] = temp;
            j++;
        }
    }

    //打印排序之后的数组
    cout << "After" << endl;
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << endl;
    }


}

int main()
{
    std::cout << "Hello World!\n";
    vector<int> nums;
    int size = nums.size();
    nums.push_back(23);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(3);
    nums.push_back(12);
    Solution move;
    move.moveZeroes2 (nums);

}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
