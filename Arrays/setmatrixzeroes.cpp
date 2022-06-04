#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
//      T. C= 0(N * M ) , S.C = 0(N) + 0(M)
//     unordered_map<int,int>rows,cols;
    int n = matrix.size();
    int m = matrix[0].size();
//     for(int i=0;i<n;++i){
//         for(int j=0;j<m;++j){
//             if(matrix[i][j]==0){
//                 rows[i]++;
//                 cols[j]++;
//             }
//         }
//     }
    
//     for(int i=0;i<n;++i){
//         for(int j=0;j<m;++j){
//             if(rows.find(i)!=rows.end() || cols.find(j)!=cols.end()){
//                 matrix[i][j]=0;
//             }
//         }
//     }
    
//      T. C= 0(N*M) , S.C = 0(1)
    bool row =false ,col =false;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(matrix[i][j]==0){
                if(i==0) row=true;
                if(j==0)col=true;
                matrix[0][j]=0;
                matrix[i][0]=0;
            }
        }
    }
    
    for(int i=1;i<n;++i){
        for(int j=1;j<m;++j){
            if(matrix[i][0]==0 || matrix[0][j]==0){
                matrix[i][j]=0;
            }
        }
    }
    
    if(row){
        for(int j=0;j<m;++j){
            matrix[0][j]=0;
        }
    }
    if(col){
        for(int i=0;i<n;++i){
            matrix[i][0]=0;
        }
    }

    
}