#include <iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter marks of the student\n";
    cin >> marks;

    //write your code here
    if (marks>90){
        cout<<"excellent";
    }
    else if (marks>80 and marks<=90){
        cout<<"good";
    }
    else if (marks>70 and marks<=80){
        cout<<"fair";
    }
    else if (marks>60 and marks<=70){
        cout<<"meets expectations";
    }
    else if(marks<=60){
        cout<<"below par";
    }
    return 0;
    
}
