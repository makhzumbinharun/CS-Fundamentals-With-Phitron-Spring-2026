Problem Sheet Doc File: https://docs.google.com/document/d/1oHwyJVnvl6wFvXi-NAKLUab_I4rzrTkw/edit


M. Capital or Small or Digit: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M
<pre>
#include<stdio.h>
int main(){
    char X;
    scanf(" %c", &X);
    if((X>='A' && X<='Z')|| (X>='a' && X<='z')){
        printf("ALPHA\n");
        if((X>='A' && X<='Z')) printf("IS CAPITAL\n");
        else printf("IS SMALL\n");
    }
    else if((X>='0' && X<='9')) printf("IS DIGIT\n");
    return 0;
}
</pre>

C. Simple Calculator: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C
<pre>
#include <stdio.h>
 
int main() {
    long long X, Y;
    scanf("%lld %lld %lld", &X, &Y);
    printf("%lld + %lld = %lld\n", X, Y, X+Y);
    printf("%lld * %lld = %lld\n", X, Y, X*Y);
    printf("%lld - %lld = %lld\n", X, Y, X-Y);
    return 0;
}
</pre>

F. Reversing (solve using swap() function): https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F
<pre>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int N;
	cin>>N;
	long long A[N];
	
	for(int i=0; i<N; i++){
	    cin>>A[i];
	}
	for(int i=N-1; i>=0; --i){
	    cout<<A[i]<<" ";
	}
	
	return 0;
}	
</pre>

E. Max (solve using max() function): https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E
<pre>
#include <stdio.h>
 
int main() {
    int N;
    long long num, max = -1;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%lld", &num);
        if (num > max) {
            max = num;
        }
    }
    printf("%lld\n", max);
    return 0;
}
</pre>

K. Max and Min: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K
<pre>
#include <stdio.h>
 
int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
 
    int max = (A >= B && A >= C) ? A : (B >= C ? B : C);
    int min = (A <= B && A <= C) ? A : (B <= C ? B : C);
 
    printf("%d %d", min, max);
    return 0;
}
</pre>
