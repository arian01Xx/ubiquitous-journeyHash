#ifndef SOLUTION_ONE_HPP
#define SOLUTION_ONE_HPP

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <unordered_set>

using namespace std;

class SolutionOne{
public:
	string ans;
	//Un poco complicado de entender
	void CharErase(map<char,int> mp, char c){
		if(mp.find(c)!=mp.end()){
			ans+=c;
			mp[c]--;
			if(not mp[c]) mp.erase(c);
		}
	}
	string sortString(string s){
		map<char,int> mp;
		for(char c: s){
			mp[c]++;
		}
		while(mp.size()){
			for(char c='a'; c<='z'; c++){
				CharErase(mp,c);
			}
			for(char c='z'; c>='a'; c--){
				CharErase(mp,c);
			}
		}
		return ans;
	}
};

#endif