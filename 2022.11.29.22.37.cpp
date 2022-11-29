    void main(void)
    {
    const int M=20,N=10;
    int a[M],b[N],c[N];
    int d,e,f=0,*pa,*pb,*pc;
    cout<<"输入数组a中元素的个数："<<endl;
    cin>>d;
    cout<<"输入数组a的"<<d<<"个元素："<<endl;
    for(pa=a;pa<a+d;pa++)
        cin>>*pa;
    cout<<"输入数组b中元素的个数："<<endl;
    cin>>e;
    cout<<"输入数组b的"<<e<<"个元素："<<endl;
    for(pb=b;pb<b+e;pb++)
        cin>>*pb;
    for(pa=a,pc=c;pa<a+d;pa++)
       {
         for(pb=b;pb<b+e;pb++)
             if(____________)
                {
                   *pc++=*pa;
                   f++;
                   break;
                }
       }
    cout<<"交集c中的元素依次为："<<endl;
    for (pc=c;pc<c+f;pc++)     cout<<setw(4)<<*pc;
    cout<<endl;
   }