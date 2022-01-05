ull getNthUglyNo(int n) {
	    // code here

	 vector <ull> u(n+1);
     u[0]=1;

     ull t1=0,t2=0,t3=0;

    for(int i=1;i<=n;i++)
    {
        u[i]=min({2*u[t1],3*u[t2],5*u[t3]});

        if(2*u[t1]==u[i])
            t1++;

       if(3*u[t2]==u[i])
            t2++;

       if(5*u[t3]==u[i])
            t3++;
    }
    return u[n-1];
	}
