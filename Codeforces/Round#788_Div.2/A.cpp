#include<bits/stdc++.h>
#include<cmath>
using namespace std;
//
//
//-----Author : PohTay -----
//
//
#define ll long long 
#define ld long double

int main() {
	
	long double a, n, m, temp;

	cout.precision(22);
	cin >> n >> m >> a;
	if(m < n)
	{
		temp = m;
		m = n;
		n =temp;
	}
	if(a >= m){
		cout << ceil(n/a) << endl;
	}
	else {
		cout << ceil(m/a)*ceil(n/a) << endl;

	}
	return 0;

}
