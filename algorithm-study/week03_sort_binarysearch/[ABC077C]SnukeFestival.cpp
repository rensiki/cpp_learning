#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long N; cin>>N;

    vector<int> a(N);
    vector<int> b(N);
    vector<int> c(N);

    for(int i=0; i<N; i++){
        cin>>a[i];
    }
    for(int i=0; i<N; i++){
        cin>>b[i];
    }
    for(int i=0; i<N; i++){
        cin>>c[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    long long result = 0;

    for(int e : b){
        long long aCnt = 0;
        long long cCnt = 0;

        aCnt = lower_bound(a.begin(), a.end(), e) - a.begin();
        cCnt = N - (upper_bound(c.begin(), c.end(), e) - c.begin());

        result += aCnt*cCnt;
        
    }


    cout<<result;

}