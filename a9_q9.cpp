#include <iostream>
using namespace std;
int main(){
    int num1, num2;
    cout<<"enter 2 numbers"<<endl;
    cin >> num1 >> num2;

    int n1 = num1;
    int n2 = num2;

    while (n1 % n2 != 0){
        int rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }

    int gcd = n2;
    int lcm = (num1 * num2) / gcd;

    cout << "grestest common divisor is:"<<(gcd) << endl;
    cout << "least common multiple is:"<<(lcm) << endl;
} 
