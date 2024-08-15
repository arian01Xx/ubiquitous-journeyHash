#ifndef SOLUTION_THREE_HPP
#define SOLUTION_THREE_HPP

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <unordered_set>

using namespace std;

class SolutionThree{
public:
	bool canBeEqual(vector<int>& target, vector<int>& arr){
		return is_permutation(arr.begin(), arr.end(), target.begin());
	}
};

#endif