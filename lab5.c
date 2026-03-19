#include <stdio.h>

int main() {
    int n, a[100], count[100]={0};

    printf("Enter size: ");
    scanf("%d", &n);

    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);

    for(int i=0;i<n;i++){
        if(count[i]==-1) continue;

        int c=1;
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                c++;
                count[j] = -1;
            }
        }
        count[i] = c;
    }

    printf("Repeated elements:\n");
    for(int i=0;i<n;i++){
        if(count[i] > 1)
            printf("%d occurs %d times\n", a[i], count[i]);
    }

    return 0;
}