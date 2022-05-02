

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
    string replaceSpace(string s) {
        int cnt=0;
        int oldSize=s.size();
        for(int i=0;i<oldSize;i++){
            if(s[i]==' ')cnt++;//字符串的每一个单元是字符所以要用' ',而不是" "
        }
        s.resize(s.size()+cnt*2);//扩充字符串长度，%20是三个字符，所以要比原来多出两个
        int newSize=s.size();
        for(int i=oldSize-1,j=newSize-1;i<j;i--,j--){
            if(s[i]!=' ')s[j]=s[i];
            else {
                s[j]='0';
                s[--j]='2';
                s[--j]='%';
            }
        }
        return s;
    }
};