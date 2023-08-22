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
