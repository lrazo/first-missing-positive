#include <iostream>
#include "Solution.h"

int main()
{
    Solution solution;
    std::vector<int> nums = {1,2,0};
    int result = solution.firstMissingPositive(nums);
    std::cout << result << std::endl;
    return 0;
}
