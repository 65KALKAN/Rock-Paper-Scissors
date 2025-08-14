
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
        cout<<"1-)tas 2-)kagit 3-)Makas"<<endl;
        cout<<"Seciminiz girininiz:"<<endl;
        cin>>kf;
        if(kf==pf){
            cout<<"BERABERE"<<endl;
        }
        else if(kf==1&&pf==2){
            cout<<"YENILGI"<<endl;
            pp++;
        }
        else if(kf==1&&pf==3){
            cout<<"ZAFER"<<endl;
            kp++;
        }
        else if(kf==2&&pf==1){
            cout<<"ZAFER"<<endl;
            kp++;
        }
        else if(kf==2&&pf==3){
            cout<<"YENİLGİ"<<endl;
            pp++;
        }
        else if(kf==3&&pf==1){
            cout<<"YENİLGİ"<<endl;
            pp++;
        }
        else if(kf==3&&pf==2){
            cout<<"ZAFER"<<endl;
            kp++;
        }
        else{
            cout<<"GECERSIZ SECIM"<<endl;
        }
        if(kp==5||pp==5){
            cout<<"-SKOR TABLOSU-"<<endl;
            cout<<"SEN:"<<kp<<endl;
            cout<<"PC:"<<pp<<endl;
            if(kp==5){
                cout<<"-SONUC-"<<endl;
                cout<<"ZAFER"<<endl;
            }
            else if(pp==5){
                cout<<"-SONUC-"<<endl;
                cout<<"-YENİLGİ-"<<endl;
            }
            else{
                cout<<"-SONUC-";
                cout<<"BERABERE";
            }
            break;
        }
    }
}