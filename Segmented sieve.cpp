#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define SIZE 1000000

int arr[SIZE];
vector <int> prime; // Stores generated primes
int is_prime[SIZE]; // 0 means prime
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
// Returns number of primes between segment [a,b]
int segmentedSieve ( int a, int b ) {
    if ( a == 1 ) a++;
 
    int sqrtn = sqrt ( b );
 
    memset ( arr, 0, sizeof arr ); // Make all index of arr 0.
 
    for ( int i = 0; i < prime.size() && prime[i] <= sqrtn; i++ ) {
        int p = prime[i];
        int j = p * p;
 
        // If j is smaller than a, then shift it inside of segment [a,b]
        if ( j < a ) j = ( ( a + p - 1 ) / p ) * p;
 
        for ( ; j <= b; j += p ) {
            arr[j-a] = 1; // mark them as not prime
        }
    }
 
    int res = 0;
    for ( int i = a; i <= b; i++ ) {
        // If it is not marked, then it is a prime
        if ( arr[i-a] == 0 ) res++;
    }
    return res;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    cin >> a >> b;
    primeGen(b);
    cout<<segmentedSieve(a,b)<<endl;
    return 0;
}
