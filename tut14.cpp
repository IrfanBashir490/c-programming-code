#include<iostream>
using namespace std;
        struct employee
        {
            /* data */
            int eId;
            char favChar;
            float salery;
        };

        int main(){
            struct employee irfan;
            struct employee ijtiba;
            struct employee faraz;
            irfan.eId = 1;
            irfan.favChar = 'c';
            irfan.salery = 120000000;
            cout<<"The value is "<<irfan.eId<<endl;tut
            cout<<"The value is "<<irfan.favChar<<endl;
            cout<<"The value is "<<irfan.salery<<endl;
        return 0;
        }
        