#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int V, n, i;
    scanf("%d%d", &V, &n); 
    int a[n];
     for(i=0; i<n; i++){
       scanf("%d", &(a[i]));
    }
    for(i=0; i<n; i++){
        if(a[i]==V){
            printf("%d", i);
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
