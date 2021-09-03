#include <stdio.h>
#include <string.h>
 
#define maxlevel 100
 
int soint[maxlevel+1];
 
int main() {
    int cases;
    scanf("%d",&cases);
    int n, m, i, c, l;
    while(cases--) {
	scanf("%d%d",&n,&m);
	memset(soint, 0, sizeof(soint));
	for(i=0;i<n;i++) {
	    scanf("%d%d",&c,&l);
	    soint[l] += c;
	}
	for(i=0;i<m;i++) {
	    scanf("%d%d",&c,&l);
	    soint[l] -= c;
	}
	int ans = 0;
	for(i=0;i<=maxlevel;i++)
	    if(soint[i] < 0)
		ans -= soint[i];
	printf("%d\n",ans);
    }
    return 0;
}
 