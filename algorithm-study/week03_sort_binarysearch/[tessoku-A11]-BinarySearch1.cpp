#include<iostream>
#include<vector>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long N, X;
    cin>>N>>X;

    vector<long long> vec(N);

    for(int i=0; i<N; i++){
        cin>>vec[i];
    }

    long long lo{0}, hi{N-1}, res{0};
    while(lo<=hi){
        long long mid = lo +(hi-lo)/2;
        if(vec[mid]<=X){
            res = mid;
            lo = mid +1;
        }
        else hi = mid -1;
    }

    cout<<res+1;
}