#include <iostream>
#include <vector>
using namespace std;
vector<int> k;
int main(){
	int a =0,b=0;
	cin >>a >> b; 
	int total =0;
	k.push_back(b);
	while(b > 1){
		if( b % 2 == 0){
			b = b/2;
		}else{
			float m = (float)(b - 1)/(float)10;
			b = (b - 1)/10;
			if((float)b - m != 0){
				break;	
			}	
		}
		total++;
		k.push_back(b);
		if(b == a){
			cout <<"YES"<<endl
				 <<total +1 <<endl;
			for(int i = total; i >= 0; i--){
				cout << k[i] << " ";	
			}
			cout << endl;
			return 0;		
		}
			 
	}
	cout << "NO"<<endl;
	return 0;
}
