#include<iostream> 
#include<vector>
using  namespace std;

vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
    int n= A.size();
    vector <int> C;
    if(B>n)  return C;
    deque <int> Q ;
    C.resize(n-B+1);
    for(int i=0; i< B; i++){
        while(!Q.empty()&&A[i]>=A[Q.back()]){
            Q.pop_back();
        }
        Q.push_back(i);
        }


    for(int i=B;i<n;i++){
        C[i-B]=A[Q.front()];
        while(!Q.empty()&&A[i]>=A[Q.back()]) {
            Q.pop_back();
        }

        while(!Q.empty()&&Q.front()<=i-B){
            Q.pop_front();
        }
        Q.push_back(i);

    }
    C[n-B]= A[Q.front()];
    return C;






}
