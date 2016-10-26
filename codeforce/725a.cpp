#include <iostream>
#include <string>
using namespace std;
int k;
string str;
int main(){
	cin >>k>>str;
	int len = str.size();
	int left=0,right=0;
	for(int i = 0; i < len;i++){
		if(str[i] == '<'){
			left++;	
		}else{
			break;
		}		
	}
	
	for(int i = len-1; i >=0; i--){
		if(str[i] == '>'){
			right++;	
		}else{
			break;
		}		
	}		
	
	cout << left+right << endl;
	return 0;
	
	
	
	
	
}
