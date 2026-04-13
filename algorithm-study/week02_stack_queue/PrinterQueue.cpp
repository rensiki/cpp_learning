#include<iostream>
#include<queue>
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin>>N;


    for(int i=0; i<N; i++){
        int n, m;
        cin>>n>>m;

        queue<pair<int, int>> q;
        priority_queue<int, vector<int>> pq;
        for(int j=0; j<n; j++){
            int e;
            cin>>e;
            q.push({e, j});
            pq.push(e);
        }

        int cnt = 1;
        while(!q.empty()){
            pair<int, int> f = q.front();
            q.pop();
            if(f.first==pq.top()){
                if(f.second == m){
                    cout<<cnt<<'\n';
                    break;
                }
                pq.pop();
                cnt++;
            }
            else{
                q.push(f);
            }
        }

    }
}