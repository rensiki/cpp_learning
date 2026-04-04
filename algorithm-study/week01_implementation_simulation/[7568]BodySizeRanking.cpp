#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


struct Person{
    int weight;
    int height;
    int rank = 1;
};
int main(){
    int N;
    cin>>N;
    vector<Person> v;

    for(int i=0; i<N; i++){
        int x, y;
        cin>>x>>y;
        v.push_back({x,y});
    }

    for(int j=0; j<N; j++){
        Person p = v[j];
        for(int k=0; k<N; k++){
            if(k==j) continue;
            if(v[k].weight>p.weight &&
                v[k].height>p.height){
                    p.rank++;
                }
        }
        cout<<p.rank<<' ';
    }
}



/*

bool cmp(Person* a, Person* b){
        return a->weight > b->weight;
    }


int main(){
    int N;
    cin>>N;
    vector<Person> v;
    vector<Person*> w;

    for(int i=0; i<N; i++){
        int x, y;
        cin>>x>>y;
        v.push_back({x,y});
    }

    for(int i=0; i<v.size(); i++){
        w.push_back(&v[i]);
    }

    sort(w.begin(), w.end(), cmp);
    
  


    int r = 1;
    int adds = 1;
    for(int i=1; i<w.size(); i++){
        if(w[i-1]->height > w[i]->height){
            //이 조건 만족하면 밀린 만큼 랭크가 더해짐
            r += adds;
            adds = 0;
        }
        w[i]->rank = r;
        adds++;
    }
    w[0]->rank = 1;




    for(Person p : v){
        cout<<p.rank<<' ';
    }
}*/

/*
88 186

60 175
58 183
55 185

46 155

*/
/*버그 원인
cppfor(Person p : v){
    w.push_back(&p);  // ⚠️ 여기가 문제!
}
p가 루프 임시 변수라서 루프가 끝나면 메모리에서 사라집니다.
즉 w에 저장된 포인터들이 전부 이미 사라진 메모리를 가리키는 dangling pointer가 됩니다. */