//
// Created by Luis Razo on 26/03/2024.
//

#ifndef FIRST_MISSING_POSITIVE_SOLUTION_H
#define FIRST_MISSING_POSITIVE_SOLUTION_H


#include <vector>

class Solution {
public:
    int firstMissingPositive(std::vector<int>& nums) {
        int n = nums.size();
        std::vector<bool> seen(n+1, false);

        for(int num : nums) {
            if (num > 0 && num <= n) {
                seen[num] = true;
            }
        }

        for (int i = 1; i <= n; i++) {
            if (!seen[i]) {
                return i;
            }
        }

        return n + 1;
    }
};


#endif //FIRST_MISSING_POSITIVE_SOLUTION_H
