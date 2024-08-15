#include "solution.hpp"
#include "solutionOne.hpp"
#include "solutionTwo.hpp"
#include "solutionThree.hpp"
#include "solutionFour.hpp"

using namespace std;

int main(){

	Solution solution;
	vector<int> in={1,2,3,4,5};
	vector<int> out=solution.distinctDifferenceArray(in);
	cout<<"First: "<<endl;
	for(int i=0; i<out.size(); i++){
		cout<<out[i]<<" ";
	}
	cout<<endl;

	/*
	SolutionOne solution1;
	string inFirst="aaaabbbbcccc";
	string outFirst=solution1.sortString(inFirst);
	cout<<"Second: "<<endl;
	cout<<outFirst<<endl;
	cout<<endl; */

	SolutionTwo solution2;
	vector<int> inSecond={1,2,3,4,5};
	int outSecond=solution2.maximumStrongPairXor(inSecond);
	cout<<"Three: "<<endl;
	cout<<outSecond<<endl;
	cout<<endl;

	SolutionThree solution3;
	vector<int> inThree={1,2,3,4};
	vector<int> in2Three={2,4,1,3};
	bool outThree=solution3.canBeEqual(inThree,in2Three);
	cout<<"Four: "<<endl;
	cout<<outThree<<endl;
	cout<<endl;

	SolutionFour solution4;
	vector<vector<int>> inFour={{1,3},{2,2}};
	vector<int> outFour=solution4.findMissingAndRepeatedValues(inFour);
	cout<<"Five: "<<endl;
	for(int i=0; i<outFour.size(); i++){
		cout<<outFour[i]<<" ";
	}
	cout<<endl;

	return 0;
}
