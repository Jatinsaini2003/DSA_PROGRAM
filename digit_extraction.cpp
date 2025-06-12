#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "The number is : " ;
    cin >> n;
    int count = 0;
    while(n > 0){
       int last_digit = n % 10;
        cout << last_digit << endl;
        count++;
        n = n / 10;
    }
    cout << "The total number is : " << count << endl;
    return 0;
}