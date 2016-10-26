#include <iostream>
#include <string>
#include <math.h> 
#include <vector>
#include <cstdlib>
using namespace std;
string str;
vector<float> ans;
vector<int> v1;
vector<float> v2;	
int main(){
	 cin >> str;
	 int flag = 0;
	 int len = str.size() ;
	 for(auto c : str){
		if(isalpha(c) && flag == 1){
			v1.push_back(-1); //indicate space
			flag = 0;
		}	
		if(isdigit(c) || ispunct(c)){			
		   v1.push_back(c - '0');
		   flag = 1;
		}
				
	 }
	 v1.push_back(-1);	 
	 //chipsy48.32televizor12.390 gave 48-232-4912-2390 || -2 is dot -49 is space
	
	string in ="";
	int ans;
	float ans1;	
	int cent;	
	for(int i =0; i < len ;){
		
		//with cent
		if(v1[i] == -2 && i+3 < len && v1[i+3] == -1 ){
			cent = v1[i+1]*10 + v1[i+2];
			ans = atoi(in.c_str()) ;
			ans1 = (float)ans+ (float)cent/(float)100;
			v2.push_back(ans1);
			cent =0; 
			ans =0;
			ans1 = 0;
			in = "";
			i = i + 4;
			continue;
		}
		//without cent
		if(v1[i] == -1){
			ans = atoi(in.c_str());
			v2.push_back((float)ans);
			ans = 0;
			in = "";
		}	
		// not equal -2 and -1
		if(v1[i] !=-2 && v1[i] != -1)
			in = in + to_string(v1[i]);
		i++;
		
	} 
	//for(auto n : v1){
	//	cout<< n <<endl;	
	//}	
	float fin = 0.0;
	for(auto n : v2)
		fin += n;
	cout<<fin<<endl;	
	return 0;	 		
	 
}	 

	
	
	
	
	
