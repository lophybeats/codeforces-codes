#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int len;
        cin >> len;
        string buf = "";
        cin >> buf;
        //cout << buf;
        int currentMax = 0;
        for (int i=0;i<len-1;i++){
            if (buf[i]=='A'){
                int count = 0;
                while(buf[i+1]=='P' && i < len-1){
                    count++;
                    i++;
                }
                currentMax = max(count,currentMax);
            }
                
        }
        cout << currentMax << endl;
    }        
}
