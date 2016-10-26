#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
string k[6] = {"c","1","b","4","a","5"};
int j[6];
int main(){
	for(int i = 0; i < 6;i++){
	  if(k[i] >= "0" && k[i] <= "9" ){
			//cout <<k[i]<<"" <<"YES"<<endl;
		} 
		//cout << j[i]<<" ";	
	}
	int m = 100;
	int c = 2*10 + 3*1;
	float ce = (float)c/(float)100;
	float result = (float)m + ce;
	cout <<result<<atoi("45") <<endl;
	cout << '5' - '0'<<endl;
	cout << '1' - '0'<<endl;
	cout << ispunct('1')<<endl;
	cout << atoi("34") <<endl;
	return 0;	
	
}
