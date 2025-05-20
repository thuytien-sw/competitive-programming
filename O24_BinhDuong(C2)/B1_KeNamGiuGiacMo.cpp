#include <bits/stdc++.h>
using namespace std;

int so_luong_uoc(int n) {
	int count = 0;
	for(int j = 1; j <= sqrt(n); ++j) {
		if(n % j == 0) {
			if(n / j != j) {
				count += 2;
			} else {
				count += 1;
			}
		}
	}
	return count;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int T, n, k;
    cin >> T;
    
    while(T--){
        cin >> n >> k;
        int arr[n], result, ucln;
        vector <int> arr1;
        for(int i = 0; i < n; ++i){
            cin >> arr[i];
            if(so_luong_uoc(arr[i]) >= k){
                arr1.push_back(arr[i]);
            }
        }
        if(arr1.empty()){
            cout << "-1\n";
            continue;
        }
        ucln = arr1[0];
        for(int i = 1; i < arr1.size(); ++i){
            ucln = gcd(ucln, arr1[i]);
        }
        cout << so_luong_uoc(ucln);        
    }

}
