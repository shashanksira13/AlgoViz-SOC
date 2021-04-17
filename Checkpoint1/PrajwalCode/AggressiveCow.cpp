#include <bits/stdc++.h>
using namespace std ;
 int n ,C ;
int check(int A[],int k)
{
  int m=1;
  int beg =A[0];
  for(int i=1;i<n;i++){
    if(A[i]-beg>=k) {
      beg=A[i];
      m++;
      if(m==C)return 1;
       }
  }
  return 0;
}
int search(int A[])
{ 
  int start=0;
  int last=A[n-1];
  int max=-1;
  int mid;
  while(start<last){
    mid= (start+last)/2;
    if(check(A,mid)==1){if (mid>max){max=mid;	}start =mid +1;}
    else {
    	last=mid;
	}

	
  }
  return max;


}
int main(){
  
  int t;
  scanf("%d",&t);
  while(t--){
    
    scanf("%d%d",&n,&C);
    int A[n];
    for (int i = 0; i < n; i++) {
      scanf("%d",A[i]);
      /* code */
    }
    sort(A,A+n);
    int ans = search(A) ;

    printf("%d\n",ans);

	
  }

}



