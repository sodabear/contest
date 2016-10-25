#include <iostream>
#include <algorithm>
using namespace std;
int a[200001] ={};
int main(){
	int k = 0;
	cin >> k;
	for (int i=1;i <=k;i++){
		cin >> a[i];
	}	
	
	for (int i =1;i<=k;i++ ){		
		if(a[i] % 2 !=0){
			if(a[i+1] -1 < 0){
				cout<< "NO"<<endl;
				return 0;	
			}else{
				a[i+1] = a[i+1] -1;
			}			
		}
	}
		cout<<"YES"<<endl;
		return 0;
}
