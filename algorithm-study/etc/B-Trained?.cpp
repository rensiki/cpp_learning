#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    

    int N; cin>>N;

    int* arr = new int[N];

    for(int i=0; i<N; i++){
        cin>>arr[i];
    }

    int cnt = 0;
    int cur_idx = 0;
    while(cnt<N){
        int a_i = arr[cur_idx];
        int prev_i = cur_idx;
        cur_idx = a_i-1;
        cnt++;
        if(cur_idx==1){
            cout<<cnt;
            return 0;
        }
    }

    
        cout<<-1;
        return 0;
    


    delete[] arr;
}