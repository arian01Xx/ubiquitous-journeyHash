#ifndef SOLUTION_FOUR_HPP
#define SOLUTION_FOUR_HPP

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <unordered_set>

using namespace std;

class SolutionFour{
public:
	vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid){
		int n2=grid.size()*grid.size();
		unordered_set<int> seen;
		int a;
		//find duplicates
		for(auto& row: grid){
			for(auto& num: row){
				if(seen.count(num)!=0) a=num;
				seen.insert(num);
			}
		}
		int b;
		for(int i=1; i<=n2; i++){
			if(seen.count(i)==0) b=i;
		}
		return {a,b};
	}
};

#endif