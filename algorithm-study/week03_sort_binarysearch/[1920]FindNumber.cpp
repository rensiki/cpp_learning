#include<iostream>
#include<unordered_set>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, M;
    cin>>N;

    unordered_set<long long> um;
    um.reserve(1000000);
    for(int i=0; i<N; i++){
        long long a; 
        cin>>a;
        um.insert(a);
    }

    cin>>M;

    for(int j=0; j<M; j++){
        int m;
        cin>>m;
        if(um.count(m)){
            cout<<1<<'\n';
        }
        else{
            cout<<0<<'\n';
        }

    }
}