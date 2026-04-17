#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N; cin>>N;
    vector<int> vec(N);
    for(auto& e : vec) cin>>e;

    sort(vec.begin(), vec.end());

    int M; cin>>M;
    for(int j=0; j<M; j++){
        int target; cin>>target;
        bool found = false;
        int low{0}, high{N-1}, mid;
        while(low<=high){
            mid = low + (high-low)/2;
            if(vec[mid] == target){ found = true; break;}
            else if(vec[mid]<target) low = mid+1;
            else high = mid -1;
        }
        cout<<found<<'\n';
    }
}






/*#include<iostream>
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
}*/