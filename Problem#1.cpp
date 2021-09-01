#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
bool twoSum(vector<int> &a,int k){ // using sort
    sort(a.begin(),a.end());
    int i = 0;int j = a.size()-1;
    while(i < j){
        if(a[i] + a[j] == k) return true;
        else if(a[i] + a[j] < k) i++;
        else if(a[i] + a[j] > k) j--;
    }
    return false;
}
bool twoSummap(vector<int> &a,int k){  // using set or map
    unordered_map<int,int> mp;
    int n = a.size();
    for(int i=0;i<n;i++){
        if(mp.find(abs(a[i]-k))!=mp.end()) return true;
        else mp[a[i]] = 1;
    }
    return false;
}
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    int k;
    cin >> k;
    cout << twoSum(a,k) << "\n";
    cout << twoSummap(a,k) << "\n";
}
