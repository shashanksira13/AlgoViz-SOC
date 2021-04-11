      	vector<int> slidingMaximum(vector<int> &A, int B) {
            int n = A.size();
            vector<int> v;
            if(B>n){
            	return v;
            }
            v.resize(n-B+1);
            deque<int> dq;
            for (int i = 0; i < B; i++) {
                while (!dq.empty() && A[i] >= A[dq.back()])
                    dq.pop_back();
                dq.push_back(i);
            }
            for (int i=B;i<n;i++) {
                v[i - B] = A[dq.front()];
                while (!dq.empty() && A[i] >= A[dq.back()])
                    dq.pop_back();
                while (!dq.empty() && dq.front() <= i-B)
                    dq.pop_front();
                dq.push_back(i);
            }
            v[n-B] = A[dq.front()];
            return v;
        }
