 #include<stdio.h>
int main(){
// / Que 15;
  int n;
   
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
      
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }

        char ch = 'A';
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("%c ", ch);
            ch++;
        }

        printf("\n");
    }
    
    return 0;
}