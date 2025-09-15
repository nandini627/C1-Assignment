  #include<stdio.h>
int main(){
  // Que:17;
    
    int n;
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {        
        
        for (int space = 0; space <=n; space++) {
            printf(" ");
        }
       
        for (int star = 1; star <=n-i; star++) {
            printf("%d",star);
        }
        printf("\n");
    }

    return 0;
}