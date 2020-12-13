/* ------------------------------------------------------------------|
给定一个整数数组，判断是否存在重复元素。

如果任意一值在数组中出现至少两次，函数返回 true 。如果数组中每个元素都不相同，则返回 false 。

 

示例 1:

输入: [1,2,3,1]
输出: true
示例 2:

输入: [1,2,3,4]
输出: false
示例 3:

输入: [1,1,1,3,3,4,3,2,4,2]
输出: true

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/contains-duplicate
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。|
-------------------------------------------------------------------*/

/*	哈希法
*
*	执行用时：84 ms, 在所有 C++ 提交中击败了39.11%的用户
*	内存消耗：19.5 MB, 在所有 C++ 提交中击败了40.28%的用户
*/

#include <iostream>
#include <string> 
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <stack>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

bool containsDuplicate(vector<int>& nums) {
    //map使用的原理是红黑树，可以进行顺序查找访问；
    //unordered map使用的是哈希表，随机读取快速，但是不能顺序查找访问；
    unordered_map<int, int> count;
    for (int x : nums) {
        count[x]++;
        if (count[x] >= 2) {
            return true;
        }
    }
    return false;
}