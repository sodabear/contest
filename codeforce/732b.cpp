#include <iostream>
using namespace std;
int planned[501];
int main(){
	int days, walk;
	cin >> days >> walk;
	
	int total = 0;
	for(int i = 1; i <=days;i++){
		cin >> planned[i];
		total += planned[i];	
	}	
	
	int newtotal = 0;
	for(int i = 1; i < days ; i++){
		int k =0;
		k = walk - planned[i] - planned[i+1];
		if(k > 0){
			planned[i+1] += k;
		}
		newtotal += planned[i];	
	}	
	newtotal += planned[days];
	cout << (newtotal - total) <<endl;
	for(int i = 1; i <=days; i++){
		cout<<planned[i]<<" ";	
	}
	cout<<endl;
	
	return 0;

	
}
