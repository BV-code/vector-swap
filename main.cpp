#include "std_lib_facilities.h"

// a function that grabs a vector by reference, reverses it and puts the results in a new vector. 


//reverse the vector and create a new vector
void reverse(const vector<int>& original, vector<int>& v2){
	
	for(int i = original.size() - 1; i >= 0; --i)
	{
		//cout << original[i] << '\n';
		v2.push_back(original[i]);
	}
	
}



int main(){
	
	vector<int> reversed;
	vector<int> example = {1,3,5,7,9};
	
	reverse(example, reversed);
	
	// printing the results of the reversed vector
	for (int i=0; i<reversed.size(); ++i)
		cout << reversed[i] << '\n';
}
