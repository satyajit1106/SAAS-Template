#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int>v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        
        // if k is greater then two then there is a way to reverse and sort 
        if(k >= 2){
            vector<int> sorted_v = v;
            sort(sorted_v.begin(), sorted_v.end());
            cout << "YES" << endl;
        }
        // if k = 1, check if it is sorted or not
        else{
            vector<int> sorted_v = v;
            sort(sorted_v.begin(), sorted_v.end());
            if(sorted_v == v){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
