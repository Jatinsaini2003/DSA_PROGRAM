#include<bits/stdc++.h>
using namespace std;
int decTobinary(int decNum){
    int ans = 0, pow = 1;
    while(decNum > 0){
        int rem = decNum % 2;
        decNum /= 2;
        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}
int binTodecimal(int binNum){
    int ans = 0, pow = 1;
    while(binNum > 0){
        int rem = binNum % 10;
        ans += (rem * pow);
        binNum /= 10;
        pow *= 2;
    }
    return ans;
}
int main(){
    int decNum;
    cout << "Enter the decimal number : ";
    cin >> decNum; 
    cout << decTobinary(decNum) << endl;
    int binNum;
    cout << "Enter the binary number : ";
    cin >> binNum;
    cout << binTodecimal(binNum) << endl;
    return 0;
}