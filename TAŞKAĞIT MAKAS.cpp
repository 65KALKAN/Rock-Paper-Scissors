
#include <iostream>
#include <ctime>
using namespace std;
int pf;
int kf;
int kp=0;
int pp=0;
int main(){
    srand(time(NULL));
    while(true){
        pf=rand()%3+1;
        cout<<"1-)Stone 2-)Paper 3-)Scissors"<<endl;
        cout<<"Your choice:"<<endl;
        cin>>kf;
        if(kf==pf){
            cout<<"DRAW"<<endl;
        }
        else if(kf==1&&pf==2){
            cout<<"LOSE"<<endl;
            pp++;
        }
        else if(kf==1&&pf==3){
            cout<<"WİN"<<endl;
            kp++;
        }
        else if(kf==2&&pf==1){
            cout<<"WİN"<<endl;
            kp++;
        }
        else if(kf==2&&pf==3){
            cout<<"LOSE"<<endl;
            pp++;
        }
        else if(kf==3&&pf==1){
            cout<<"LOSE"<<endl;
            pp++;
        }
        else if(kf==3&&pf==2){
            cout<<"WİN"<<endl;
            kp++;
        }
        else{
            cout<<"INVALID ELECTION"<<endl;
        }
        if(kp==5||pp==5){
            cout<<"-LEADERBOARD-"<<endl;
            cout<<"YOU:"<<kp<<endl;
            cout<<"PC:"<<pp<<endl;
            if(kp==5){
                cout<<"-RESULT-"<<endl;
                cout<<"YOU WIN"<<endl;
            }
            else if(pp==5){
                cout<<"-RESULT-"<<endl;
                cout<<"-YOU LOSE-"<<endl;
            }
            break;
        }
    }
}
