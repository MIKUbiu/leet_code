
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}
class Solution {
public:
    string reverseStr(string s, int k) {
        for(int i=0;i<s.size();i+=(2*k)){
            if(i+k<=s.size()){
                reverse(s.begin()+i,s.begin()+i+k);
                continue;
            }
            reverse(s.begin()+i,s.begin()+s.size());//reverse的区间是左闭右开，相当于begin(),end()
        }
        return s;}
};