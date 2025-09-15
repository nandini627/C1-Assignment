 #include<stdio.h>
int main(){
Que:12;

int n; 
 scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int k = n; k<=2*i-1; k++) {
            printf("*");
        }
        printf("\n");
     }
    return 0;
}