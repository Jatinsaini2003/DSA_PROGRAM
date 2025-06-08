#include<iostream>
using namespace std;
int main(){
    int x ;
    cin >> x;
    cout << "your age is :" << x << endl;
    if(x >= 18){
        cout << "you are eligible to vote" << endl;
    }
    else {
        cout << " you are not eligible to vote" << endl;
    }
    return 0;
}