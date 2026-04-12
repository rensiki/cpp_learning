#include<iostream>
#include<queue>
#include<string>
using namespace std;

void inputFunc(queue<int>& q, const string& command){
    if(command == "push"){
        int e;
        cin>>e;
        q.push(e);
    }
    else if(command == "pop"){
        if(q.size()>0){
            cout<<q.front()<<'\n';
            q.pop();
        }
        else{
            cout<<-1<<'\n';
        }
    }
    else if(command == "size"){
        cout<<q.size()<<'\n';
    }
    else if(command == "empty"){
        cout<<q.empty()<<'\n';
    }
    else if(command == "front"){
        if(q.size()>0){
            cout<<q.front()<<'\n';
        }
        else{
            cout<<-1<<'\n';
        }
    }
    else if(command == "back"){
        if(q.size()>0){
            cout<<q.back()<<'\n';
        }
        else{
            cout<<-1<<'\n';
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin>>N;
    queue<int> q;

    for(int i=0; i<N; i++){
        string command;
        cin>>command;
        inputFunc(q, command);
    }

}