#include<bits/stdc++.h>
using namespace std;

// c++ seive algorithm to find how many prime numbers are there upto 
// given number n

int main(){
    int n;
    cin>>n;
    bool isPrime[n+1];

    isPrime[0]=false;
    isPrime[1]=false;

    for(int i=2; i<=n; i++){
        isPrime[i]=true;
    }

    for(int i=2; i*i<=n; i++){
        if(isPrime[i]){
            for(int j=i*i; j<=n; j+=i){
                isPrime[j]=false;
            }
        }
    }

    int count=0;
    for(auto &i:isPrime){
        if(i){
            count++;
        }
    }

    cout<<count<<"\n";
}

/*

Time Complexity --> O(n*log(log n))

*/