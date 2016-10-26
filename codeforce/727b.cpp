#include <iostream>
#include <stdlib.h> 
#include <string>
#include <math.h> 
#include <ctype.h>
#include <vector>
using namespace std;
string k[1001];
vector<float> ans;
vector<int> in;
vector<int> cent;	
int main(){
	 cin >> k;
	 int flag = 0; //change when first meet a char
	 int len = k.size();
	 
	 for(int i =0; i < len){
		 // second time meet char but it is first char 	
		 if(isalpha(k[i]) && flag ==1 && k[i] != "."){
		 //turn two int vector to a float	 
			int m = 0;
			int count = 0;
			for(int n:in){
				m = n + pow(10,count)*n;
				count++;
			}
			int c = cent[0]*10 + cent[1];
			float ce = (float)c/(float)100;
			float result = (float)m + ce;
			ans.push_back(result);
			in.clear();
			cent.clear();
			flag = 0;		
		 }	 
		 //digit
		 if(isdigit[k[i]]){
			in.push_back(atoi(k[i]));
			flag = 1;		
		 }
		 // dot
		 if(k[i] == "." && i+3 < len && isdigit(k[i+3])){
			 in.push_back(atoi(k[i+1]))
			 in.push_back(atoi(k[i+2]))
			 in.push_back(atoi(k[i+3]))
			 i = i +4;
			 flag = 1;
			 continue; 
		 }else{
		 	cent.push_back(atoi(k[i+1]))
			cent.push_back(atoi(k[i+2]))
			i = i +3;
		 	flag = 1;
			continue; 	
		 }	 
		 i++;
	}
		 		
	 
}	 

	
	
	
	
	
