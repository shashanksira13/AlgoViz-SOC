    int arr [10000];
    int a[10000];
    int cur,mincur;



MinStack::MinStack() {
    cur=-1;
    mincur=-1;

}

void MinStack::push(int x) {
    
    if(mincur==-1){
        a[0]=x;
        mincur++;
    }
    else {
        if (x<a[mincur]) a[mincur+1]=x; mincur++;
    }
    cur++;
    arr[cur]=x;
    
    
    
}

void MinStack::pop() {
    if(cur>-1)
   { 
   
    if(arr[cur]==a[mincur])mincur--;
     cur--;
    
       return ;
   }
    else return;
}

int MinStack::top() {
    if(cur==-1)return -1;
    else return arr[cur];
    
}

int MinStack::getMin() {
    if(cur>-1)  return a[mincur];
    else return -1;
    
    
}

