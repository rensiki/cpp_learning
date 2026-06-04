#include<iostream>
#include<vector>
using namespace std;

typedef long long ll;
vector<ll> vec;

bool GreedySparse(ll max, ll N, ll M){
    ll idx = 0;
    for(int i=0; i<M; i++){
        if(idx>=N) break;
        ll lineSum = 0;
        lineSum += vec[idx];
        if(++idx>=N) break;

        while(lineSum + 1 + vec[idx]<=max){
            lineSum += 1;
            lineSum += vec[idx];
            if(++idx>=N) break;
        }
    }
    return idx>=N;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll N,M;
    cin>>N>>M;

    vec.resize(N);

    ll sum = 0;
    for(int i=0; i<N; i++){
        ll e;
        cin>>e;
        vec[i] = e;
        sum += vec[i];
    }

    ll lo{1}, hi{sum}, res{1};
    while(lo<=hi){
        ll mid = lo + (hi - lo)/2;
        if(GreedySparse(mid, N, M)){
            res = mid;
            hi = mid -1;
        }
        else lo = mid + 1;
    }

    cout<<res;


}