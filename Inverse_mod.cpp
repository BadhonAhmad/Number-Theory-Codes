int powerMod(int a,int b){
	if(b == 0)
		return 1 % mod;
	if(b%2 == 0){
		int x = powerMod(a, b / 2);
		return (x * x) % mod;
	}
	else{ 
		int x = powerMod(a, b / 2);
		return ((x * x) % mod * a) % mod;
	}
	return 0;
}


int inverseMod(int a){
	return powerMod(a, mod - 2);
}
