#include<bits/stdc++.h>
using namespace std;
#define M 5000000
#define int unsigned long long
int phi[M+2];

//Here is the optimized code of calculation Euler Totient function
void calculatePhi(){
    for(int i=2; i<=M; i++)   phi[i]=i;

    for(int i=2; i<=M; i++){
        if(phi[i] == i){ 
            for(int j=i; j<=M; j+=i)   phi[j]-=phi[j]/i;
        }
    }
}

//This is a solve of a lightoj problem named mathematically hard
int32_t main(){

    calculatePhi();
    
    phi[1]=1;
    int t,a,b,ct=1;
    cin>>t;
    
    for(int i=2; i<=M; i++)   phi[i]=phi[i]*phi[i]+phi[i-1];
   
    while (t--)
    {
        cin>>a>>b;
        cout<<"Case "<<ct++<<": "<<phi[b]-phi[a-1]<<endl;
    }
    
}
