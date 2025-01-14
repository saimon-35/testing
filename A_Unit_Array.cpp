#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
while(t--){
     int n;
     cin >> n;
     int p = 0;
     int neg = 0;
     for(int i = 1; i <= n; i++){
        int x;
         cin >>x;
         if(x == 1) {
            p++;
         }
         else {
            neg++;
         }
     }
     if(p >= neg && (neg % 2 == 0)) cout << 0 << endl;
     else if(p >= neg && (neg % 2)) cout << 1 <<endl;
     else{
        int ans = p + neg;
        if(ans % 2 == 0){
            ans = abs(ans / 2 - p);
            neg -= (ans);
            if(neg % 2) ans++;
        }
        else {
            ans = abs(ans / 2 - p + 1);
            neg -= (ans);
            if(neg % 2) ans++;
        }
        cout << ans << endl;
     }
     ///
     kjdhjk
     kjdhkjs
     kjhdjksd
}
}