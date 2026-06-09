#include<iostream>
using namespace std;

typedef long long ll;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N; cin>>N;
    ll K; cin>>K;

    ll* arr = new ll[N];

    for(int i=0; i<N; i++){
        cin>>arr[i];
    }

    int left{0}, right{-1};
    ll result{0};

    ll cur_sum = 0;
    while(right<N){
        if(cur_sum>=K){
            result += N-right;
            cur_sum-= arr[left++];
        }
        else{
            cur_sum+= arr[++right];
        }
    }

    cout<<result;
    


    delete[] arr;

}

/*while(cur_sum<K){
            if(++right>=N){//다음 right값이 N인데도 K가 되지 못함
                break;
            }
            cur_sum += arr[right];
        }

        result += N-right;//K가 되지 못하면 right=N=>0더함*/