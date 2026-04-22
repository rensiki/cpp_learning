#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(int a, int b){
    return a>b;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N; cin>>N;

    vector<int> vec(N);

    for(int i=0; i<N; i++){
        int e; cin>>e;
        vec[i] = e;
    }

    sort(vec.begin(), vec.end(), compare);

    int sum = 0;
    int mul = 1;
    for(int e: vec){
        //+ - + - ...
        //cout<<mul*e<<"->added\n";
        sum += mul*e;
        mul *= -1;
    }

    cout<<sum;
}