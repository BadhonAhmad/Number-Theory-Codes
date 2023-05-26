/*
There are 
n children and m apples that will be distributed to them. Your task is to count the number of ways this can be done.

Print the number of ways modulo 


Sample
Inputcopy	Outputcopy
3 2
6
*/

#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
#define mod 1000000007
#define N 20000006
int fact[N];

int powerMod(int a,int b){
	if(b == 0)
		return 1 % mod;
	if(b%2 == 0){
		int x = powerMod(a, b / 2);
		return (x * x) % mod;
	}
	else{
		int x = powerMod(a, b / 2);
		return (((x * x) % mod )* a) % mod;
	}
	return 0;
}


int inverseMod(int a){
	return powerMod(a, mod - 2);
}

int nCrMod(int n,int r){
	if(r == 0)
		return 1;
	if(r > n)
		return 0;
	return (fact[n] * (inverseMod((fact[r] * fact[n - r]) % mod))) % mod;
}
int32_t main()
{

	fact[0] = 1;
	for (int i = 1; i < N; i++){
		fact[i] = (fact[i - 1] * i) % mod;
	}
	int n, m;
	cin >> n >> m;
	cout << nCrMod(n + m - 1, n - 1);
}
