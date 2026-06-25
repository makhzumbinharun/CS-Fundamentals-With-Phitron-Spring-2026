Prepare it in a markdown format



Module 1: Practice Problem : https://docs.google.com/document/d/12ZqZJQsBGwOOg7ESlWp4fS71G_hqXmSANHX7E7iwkXk/edit?tab=t.0#heading=h.9yj2pyk3w5nm





Find out time complexity of the following problems: 





Problem 1:

    int i=0,sum = 0;

    while(i<n)

    {

        int j=0;

        while(j<n)

        {

            sum += j;

            j+=2;

        }

        i++;

    }









Problem 2:

    for(int i=0;i<n;i+=10)

    {

        for(int j=n;j>=0;j--)

        {

            cout << "Hello" << endl;

        }

    }





    for(int i=0;i<n;i++)

    {

        cout << "Hi" << endl;

    }























Problem 3:

    for(int i=0;i<n;i++)

    {

        int j=0;

        while(j*j<n)

        {

            i+j;

            j++;

        }

    }











Problem 4:

    for(int i=0;i<n;i++)

    {

        for(int j=n;j>=0;j--)

        {

            for(int k=1;k<=n;k++)

            {

                sum += i+j+k;

            }

        }

    }





    for(int i=0;i<n;i++)

    {

        for(int j=1;j<=n;j++)

        {

            sum += i+j;

        }

    }

























Problem 5:

    for(int i=0;i*i<n;i++)

    {

        sum += i;

    }





    for(int i=0;i<n;i++)

    {

        sum += i;

        i*=k;

    }









Problem 6:

    for(int i=0;i<n;i++)

    {

        cin >> a[i];

    }

    sort(a,a+n);









Problem 7:

    for(int i=0;i<n;i++)

    {

        sort(a,a+n);

    }







Problem 8: 

int k=1;

while(k<=n){

	cout<<k<<endl;

	k=k*2;

}









Problem 9:

for (int i = 0; i < n; i++)

        for (int j = i; j > 0; j--)

            cout << i << j;









		Problem 10:

for (int i = 0; i < n; i++)

        for (int j = i; j > 0; j--)

            for(int k=j; k > 0; k--)

                cout << i << j << k;









Problem 11:

for(int i=n/2;i<=n;i++){

	for(int j=1;j<=n;j=j*2){

   		cout<<i<<j<<endl;

	}

}









Problem 12:

for(int i=n/2;i<=n;i++){

	for(int j=1;j<=n;j=j+1){

   		cout<<i<<j<<endl;

	}

}















Solution of Problem 

O(N*N)

O(N*N)

O(N*sqrt(N))

O(N*N*N)

O(sqrt(N))

O(NlogN)

O(N*NlogN)

O(logN)

O(N*N)

O(N*N*N)

O(NlogN)

O(N*N)

