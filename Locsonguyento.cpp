#include <bits/stdc++.h>
#include <math.h>
using namespace std;
const int H = 500;
vector<string> v1(H);
bool check(long long n){
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0){
			return 0;
		}
	}
	return 1;
}
int main()
{
	string str;
	getline(cin,str);
	//cout << str;
	//return 0;	
	int tong = 0;
	for(int i = 0;i < str.size();i++)	
	{
		if(str[i] >= '0' && str[i] <= '9'){
			v1[tong] = v1[tong] + str[i];
			if(str[i + 1] >= 'A' && str[i + 1] <= 'Z' || str[i + 1] >= 'a' && str[i + 1] <= 'z' || str[i + 1] == ' '){
				tong++;
			}
		}	
	}
	for(int i= 0;i <= tong;i++){
		if(check(stoi(v1[i])) == true){
			cout << v1[i] << endl;
		}
		//cout << v1[]
	}
	return 0;
}