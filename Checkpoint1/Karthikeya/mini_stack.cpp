int a[10000000]; int t=-1;
int ma[10000000]; int m=INT_MAX;
MinStack::MinStack() {
    t=-1; m=INT_MAX;
}
 
void MinStack::push(int x) {
    t++;
    a[t]=x;
    m=min(m,x);
    ma[t]=m;
}
 
void MinStack::pop() {
    if(t==-1) return;
    t--;
    if(t==-1) m=INT_MAX;
    else{
        m=ma[t];
    }
}
 
int MinStack::top() {
    if(t==-1) return -1;
    return a[t];
}
 
int MinStack::getMin() {
    if(t==-1) return -1;
    return m;
}
