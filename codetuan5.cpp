#include<bits/stdc++.h>
using namespace std;
int a[100];
int cnt = 0;
int gcd(int a, int b){
    if(b == 0) return a;
    else return gcd(b, a % b);
}
int modular_exponentiation(int b, int n, int m){
    int x = 1;
    int power = b % m;
    for(int i = 0 ;i < cnt ; i++){
        if(a[i] == 1) {
            x = (x*power) % m;
        }
        power = (power*power) % m;
    }
    return x;
}
void binary_seprate(int n){
    while(n != 0){
        int ls =  n % 2;
        a[cnt] = ls;
        cnt++;
        n /= 2;
    }
}
bool prime(int n){
    if(n < 2) return false;
    else{
        for(int i = 2;i <= sqrt(n);i ++){
            if(n % i == 0) return false;
        }
    }
    return true;
}
int main(){
    return 0;
}
