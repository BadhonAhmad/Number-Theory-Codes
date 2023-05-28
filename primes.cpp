#define N 2000006

vector<ll> prime_divisor[N];
void primedivisors(){
    for(int i = 2; i < N; i++){
        if(prime_divisor[i].empty()){
            for(int j = i; j < N; j+=i){
                prime_divisor[j].push_back(i);
            }
        }
    }
}
//seive of eratosthens
void primeGen ( int n ) // give sqroot of given n while computing prime facto of n;
{
    n += 10;
    for ( int i = 3; i <= n; i += 2 ) is_prime[i] = 1;
 
    int sq = sqrt ( n );
    for ( int i = 3; i <= sq; i += 2 ) {
        if ( is_prime[i] == 1 ) {
            for ( int j = i*i; j <= n; j += ( i + i ) ) {
                is_prime[j] = 0;
            }
        }
    }
 
    is_prime[2] = 1;
    prime.push_back (2);
 
    for ( int i = 3; i <= n; i += 2 ) {
        if ( is_prime[i] == 1 ) prime.push_back ( i );
    }
}
