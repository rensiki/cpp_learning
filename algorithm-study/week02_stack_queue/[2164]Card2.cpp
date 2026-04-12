#include<iostream>
#include<queue>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin>>N;

    queue<int> q; 

    for(int i=0; i<N; i++){
        q.push(i+1);
        //cout<<q.back()<<" ";
    }
    
    while(q.size()>1){
        //cout<<q.front()<<'\n';
        q.pop();
        q.push(q.front());
        //cout<<q.front()<<"\n\n";
        q.pop();
    }

    cout<<q.front();
}