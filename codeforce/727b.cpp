#include <iostream>
#include <string>
#include <math.h> 
#include <vector>
#include <cstdlib>
#include <iomanip>      // std::setprecision
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
			//cout << cent<<endl;
			ans = atoi(in.c_str()) ;
			v2.push_back(ans);
			ans1 = (float)cent/(float)100;
			//cout << ans1<<endl;
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
	
	float fin = 0.0;
	for(float n : v2){
		fin += n;
		
	}
	//float fina = fixed <<setprecision(2)<<fin;
	//cout<<"float number is " <<fin <<endl;	
	if(fin > 999.99){
		//fin = 48.32 + 12390.00
		float k = roundf(fin * 100) / 100.0;
		string ans = to_string(k);
		cout <<"aaaaa" <<ans <<endl;
		//cout << ans; this line of code gave me 12438.320312
		                        // i want to get 12438.32
		len = ans.size();
		string ans1 = "";
		for(int i = 0; i < len; i++){
			ans1 = ans1 + ans[i];
			if(len - 6 -1 == i){
				ans1 = ans1 + '.';	
			}
		}
		cout <<	ans1 <<endl;	
	}else{		
		cout<<fixed
			<<setprecision(2)
			<<fin<<endl;
	}			
	return 0;	 		


	 
}	 

	
	
	
	
	
