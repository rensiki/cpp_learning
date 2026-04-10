#include<iostream>
using namespace std;


int main(){
    int N;
    int cnt = 0;
    int fCnt{0}, tCnt{0};
    cin>>N;

    if(N<5 && N != 3){
        cout<<-1;
        return 0;
    }

    int Ntmp = N;
    fCnt = Ntmp/5;
    Ntmp %= 5;

    
    while(Ntmp <= N){
        if(Ntmp ==0){break;}
        if(Ntmp%3 == 0){
            tCnt = Ntmp/3;
            break;
        }
        else{
            Ntmp += 5;
            fCnt--;
        }


    }


            if(Ntmp > N){
                cout<<-1;
                return 0;
            } 


    cout<<fCnt+tCnt;

}