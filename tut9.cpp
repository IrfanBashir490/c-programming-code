#include<iostream>

using namespace std;

int main(){
    //cout<<"This tutorial 9";
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
   
    // selection control structure; if else-if else Ladder
    // if((age<18) && (age>0)){
    //     cout<<"you can not come to the party"<<endl;
    // }
    // else if (age==18){
    //     cout<<"you are a kid and you will get a kid pass to the party"<<endl;
    // }
    // else if(age<1){
    //     cout<<"You are not yet born"<<endl;
    // }
    // else{
    //     cout<<"you cam come to the party"<<endl;
    // }
      // selection control structure: switch case ststements

      switch (age)
      {
      case 18:
          cout<<"You are 18";
          break;
      case 22:
           cout<<"You are 22"<<endl;
          break;
      case 2:
          cout<<"You are 2"<<endl;
          break;
      
      default:
      cout<<"No special cases"<<endl;
          break;
      }
      cout<<"Done with switch case";
    return 0;
}