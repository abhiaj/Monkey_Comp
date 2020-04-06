#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++){
        int n;
        scanf("%d",&n);
        vector<vector<int> > mat( n , vector<int> (n, 0));  
        int trace = 0;
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                int x;
                scanf("%d",&x);
                mat[j][k]=x;
                if(j==k){
                    trace+=x;
                }
            }
        }
        int r = 0;
        for(int j=0; j<n; j++){
            unordered_map<int,int> umap;
            for(int k=0; k<n; k++){
                umap[mat[j][k]]++;
                if(umap[mat[j][k]] >=2){
                    r+=1;
                    break;
                }
            }
        }
        int c=0;
        for(int j=0; j<n; j++){
            unordered_map<int,int> umap;
            for(int k=0; k<n; k++){
                umap[mat[k][j]]++;
                if(umap[mat[k][j]] >=2){
                    c+=1;
                    break;
                }
            }
        }
        printf("Case #%d: %d %d %d\n",i+1,trace,r,c);

    }
    return 0;
}