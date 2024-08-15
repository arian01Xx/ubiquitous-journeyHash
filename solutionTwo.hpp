#ifndef SOLUTION_TWO_HPP
#define SOLUTION_TWO_HPP

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <unordered_set>

using namespace std;

class SolutionTwo{
public:
	int maximumStrongPairXor(vector<int>& nums){
		int m=0;
		for(int i=0; i<nums.size(); i++){
			for(int j=0; j<nums.size(); j++){
				if(abs(nums[i]-nums[j])<=min(nums[i],nums[j])){
					m=max(m,nums[i]^nums[j]);
				}
			}
		}
		return m;
	}
};

#endif