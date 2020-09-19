#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[10000],i,j=0,n;
    scanf("%d",&n);
for(i=0;i<n;i++) scanf("%d",&a[i]);
for(i=0;i<n;i++)
    j=j+a[i];

printf("%d",j);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
