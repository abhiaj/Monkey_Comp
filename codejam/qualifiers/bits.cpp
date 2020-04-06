#include<bits/stdc++.h>
using namespace std;

#define foin(x,n) for(int x = 0; x < n; x++)
#define matrix(mat,n,m) vector<vector<int>> mat( n , vector<int> (m, 0))
#define si(n) scanf("%d",&n)

int main(){

    int t;
    si(t);
    int b;
    si(b);
    // cerr<<b<<" "<<t;
    foin(i,t) {
        int index = 0;
        map<char,int> same;
        map<char,int> comp;
        foin(j, b/10) {
            for(int k=0; k<5 && index<=(b/2) ; k++) {
                if(j==0) {
                    cout<<index<<"\n";
                    char ch1;
                    scanf("%c",&ch1);

                    cout<<b-index-1<<"\n";
                    char ch2;
                    scanf("%c", &ch2);

                    if(ch1==ch2){
                        same.insert(pair<char,int>(ch1,index));
                        index++;
                    }
                    else {
                        comp.insert(pair<char,int>(ch1,index));
                        index++;
                    }
                }
                else {
                    //11th and 12th turn
                    if(k==0){

                        //modifying the bits which are same from front and back
                        if(same.size()!=0) {
                            char ch = same.begin()->first;
                            int idx = same.begin()->second;
                            cout<<idx<<"\n";
                            char ch_new;
                            scanf("%c",&ch_new);
                            if(ch != ch_new) {
                                map<char,int>::iterator itr;
                                for(itr = same.begin(); itr!=same.end();itr++){
                                    char ch_temp;
                                    if(itr->first == '0')
                                        ch_temp = '1';
                                    else
                                        ch_temp = '0';
                                    same.insert(pair<char,int>(ch_temp,itr->second));
                                    same.erase(itr);
                                }
                            }
                        }

                        // modifying the bits which are different from front and back
                        if(comp.size()!=0) {
                            char ch = comp.begin()->first;
                            int idx = comp.begin()->second;
                            cout<<idx<<"\n";
                            char ch_new;
                            scanf("%c",&ch_new);
                            if(ch != ch_new) {
                                map<char,int>::iterator itr;
                                for(itr = comp.begin(); itr!=comp.end();itr++){
                                    char ch_temp;
                                    if(itr->first == '0')
                                        ch_temp = '1';
                                    else
                                        ch_temp = '0';
                                    comp.insert(pair<char,int>(ch_temp,itr->second));
                                    comp.erase(itr);
                                }
                            }
                        }
                    }

                    // start getting othehr bits
                    else {
                        cout<<index<<"\n";
                        char ch1;
                        scanf("%c",&ch1);

                        cout<<b-index-1<<"\n";
                        char ch2;
                        scanf("%c", &ch2);

                        if(ch1==ch2){
                            same.insert(pair<char,int>(ch1,index));
                            index++;
                        }
                        else {
                            comp.insert(pair<char,int>(ch1,index));
                            index++;
                        }
                    }
                }
            }
        }
        string S;
        S.reserve(b);
        map<char,int>::iterator itr;
        for(itr = same.begin(); itr!=same.end(); itr++) {
            char ch = itr->first;
            int idx = itr->second;
            S[idx] = ch;
            S[b-idx-1] = ch;
        }
        for(itr = comp.begin(); itr!=comp.end(); itr++) {
            char ch = itr->first;
            int idx = itr->second;
            S[idx] = ch;
            S[b-idx-1] = ch == '0' ? '1' : '0';
        }
        cout<<S<<"\n";
        char ch;
        scanf("%c",&ch);
        if(ch=='Y'){
            continue;
        }
        else if(ch=='N')
        {
            exit;
        }
        
        //do something here
    }
    return 0;
}
