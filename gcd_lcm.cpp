//recursive method
int gcd(int a,int b){
    if(b == 0) return a;
    gcd(b,a%b);
}
//iterative method
int gcd(int a, int b){
    while (b)
    {
        a%=b;
        swap(a,b);
    }
    return a;
}
//lcm general approach
int lcm(int a,int b){
    return (a*b)/gcd(a,b);//for 2e18 it returns -1 
}
//to avoid overflow efficient lcm
int lcm(int a,int b){
    return (a/gcd(a,b))*b;//2000000000000000000->2e18
}
