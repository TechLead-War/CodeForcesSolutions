//Qs8. Make a pattern of inverted triangle

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	for(int i = 0; i < n; i++) {
		//for spaces
		for(int j = 0; j < i; j++) cout << " ";
			
		//print stars
		for(int k = 0; k < n - i; k++) cout << "*";
		cout << endl;	
	}	
	return 0;
}