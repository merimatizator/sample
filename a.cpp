#include <iostream>
#include <algorithm>
using namespace std;

string tolower(string str){
	for(int i =0;i<str.size();i++){
		str[i] = str[i] + 32;
	}
	return str;
}
bool mycomp(string str1,string str2){
	tolower(str1);
	tolower(str2);
	bool ok = true;
	for(int i = 0;i<str1.size();i++){
		if(i == str2.size() || str1[i] > str2[i]) 
		return false;
		else if(str1[i] < str2[i]) 
		return true;
	}
}
int main(){
	int m;
	cin >> m;
	string k[m];
	int a[m];
	
	for(int i = 0; i < m;i++){
		cin >> k[i];
		cin >> a[i];
	}
	sort(k, k + m,mycomp);
	sort(a, a + m);
	for(int i = 0;i < m;i++){
		cout<< k[i] << " " << a[i]<<endl;
	}

	return 0;
}