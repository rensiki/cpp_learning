#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

typedef long double ld;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, K;
    cin>>N>>K;

    vector<ld> vec(N);

    for(int i=0; i<N; i++){
        ld e; cin>>e;
        vec[i] = (e+1)/2;
    }

    ld max_sum = -1;
    ld cur_sum=0;
    for(int j=0; j<K; j++){
        cur_sum+=vec[K-1-j];
    }

    //처음 시작을 따로 빼놨음. 
    //이때 루프에는 적용되지만 따로 빼놓은 데는 적용 안되는 코드가 있는지 살펴보기
    if(cur_sum>max_sum){
            max_sum = cur_sum;
    }


    for(int i=K; i<N; i++){
        cur_sum+=vec[i];
        cur_sum-=vec[i-K];
        if(cur_sum>max_sum){
            max_sum = cur_sum;
        }
    }

    cout<<fixed<<setprecision(12)<<max_sum;

}