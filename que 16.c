  #include<stdio.h>
int main(){
// Que:16;
    
    int n;
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {          
        
        for (int space = 0; space <=n; space++) {
            printf(" ");
        }
       
        for (int star = 0; star <=n-i; star++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}