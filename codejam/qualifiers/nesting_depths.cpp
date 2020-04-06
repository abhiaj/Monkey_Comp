#include<bits/stdc++.h>
using namespace std;

#define foin(x,n) for(int x = 0; x < n; x++)
#define matrix(mat,n,m) vector<vector<int>> mat( n , vector<int> (m, 0))
#define si(n) scanf("%d",&n)

string with_parentheses(string str) {
    int num_paren = stoi(string(1, str[0]));
    string ret = str;
    foin(i, num_paren){
        ret = "(" + ret + ")";
    }
    return ret;
}

string add_parentheses(string str, int num) {

    string brac;
    if(num > 0)
        brac = ")";
    else
        brac = "(";
    
    string ret = str;

    int num_pos = abs(num);
    foin(i, num_pos) {
        ret += brac;
    }
    return ret;
}

int main(){

    int t;
    si(t);
    foin(i,t) {
        string s;
        cin>>s;
        string s_p = "";
        string temp = "";
        foin(j, s.size()) {
            temp+= s[j];
            if(j == s.size()-1){
                s_p += with_parentheses(temp);
                temp = "";
            }
            else if(s[j] != s[j+1]) {
                s_p += with_parentheses(temp);
                temp = "";
            }
        }
        // cout<<s_p<<endl;
        int count = 0;
        int sw = 0;
        string s_bal = "";
        foin(j, s_p.size()) {
            if(j == s_p.size()-1) {
                s_bal = add_parentheses(s_bal, count);
                count = 0;
                s_bal += s_p[j];
            }
            else if(sw == 0) {
                if(s_p[j] == ')'){
                    sw = 1;
                    j--;
                }
                else {
                    s_bal += s_p[j];
                }
            }
            else if(sw == 1) {
                if( s_p[j] == ')')
                    count++;
                else if( s_p[j] == '(')
                    count--;
                else {
                    sw = 0;
                    j--;
                    s_bal = add_parentheses(s_bal, count);
                    count = 0;
                }
            }
        }
        // cout<<s_bal<<endl;
        cout<<"Case #"<<i+1<<": "<<s_bal<<endl;
    }
    return 0;
}
