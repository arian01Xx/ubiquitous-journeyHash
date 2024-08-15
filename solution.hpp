#ifndef SOLUTION_HPP
#define SOLUTION_HPP

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <unordered_set>

using namespace std;

class Solution{
public:
	vector<int> distinctDifferenceArray(vector<int>& nums){
		map<int,int> pre, suff;
		int n=nums.size();
		vector<int> ans;
		for(int i=0; i<n; i++){
			suff[nums[i]]++;
		}
		for(int i=0; i<n; i++){
			suff[nums[i]]--;
			pre[nums[i]]++;
			if(suff[nums[i]]==0) suff.erase(nums[i]);
			ans.push_back(pre.size()-suff.size());
		}
		return ans;
	}
};

#endif