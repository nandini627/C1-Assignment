 #include<stdio.h>
int main(){
    // Que 14;
     int n; 
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }
  
        int num = 1;
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("%d ", num);
            num++;
        }

        printf("\n");
    }
    return 0;
}