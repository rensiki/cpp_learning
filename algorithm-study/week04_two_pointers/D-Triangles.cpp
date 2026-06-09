#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N; cin>>N;

    vector<int> vec(N);

    for(int i=0; i<N; i++){
        cin>>vec[i];
    }

    sort(vec.begin(), vec.end());

    int res = 0;

    for(int i=N-1; i>=2; i--){
        int c = vec[i];
        int left{0}, right{i-1};
        int a, b;

        while(left<right){
            a = vec[left];
            b = vec[right];

            if(a+b>c){
                res += right-left;
                right--;
            }
            else{
                left++;
            }
        }
    }

    cout<<res;
}