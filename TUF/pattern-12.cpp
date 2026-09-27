class Solution {
public:
    void pattern12(int n) {
        
        for(int i=1; i<=n; i++){
             for(int m=1;m<=i; m++){
                cout<<m;
            }
            for(int j=(n-i);j>=1; j--){
                cout<<" ";
            }
            for(int j=(n-i);j>=1; j--){
                cout<<" ";
            }
            for(int k=i; k>=1;k--){
                cout<<k;
            }
            cout<<'\n';

        }

    }
};