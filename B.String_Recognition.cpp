#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    int a=0,c=0;

    cout<<"Enter a string: ";cin>>str;

    for(int i=0;i<str.size();i++){
        if(str.at(i)=='a' || str.at(0)==' '){
            a++;
            if(i==str.size()-1){
                break;
            }
        }
        if(str.at(i)=='a' && str.at(i+1)=='b' || str.at(0)==' ' && str.at(i+1)=='b'){
            cout<<"String is accepted ."<<endl;
            c=1;
            break;
        }
        if(str.at(str.size()-1)=='b' && str.at(str.size()-2)=='b' && str.at(str.size()-3)=='a'){
            cout<<"String is accepted -> [ abb ]"<<endl;
            c=1;
            break;
        }
    }

    if(a==str.size()){
        cout<<"String is accepted ."<<endl;
    }else if(c==0){
        cout<<"String is not accepted."<<endl;
    }

    return 0;
}
