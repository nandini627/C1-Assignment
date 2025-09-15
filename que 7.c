  #include<stdio.h>
int main(){
// Que:7;

int n;
scanf("%d",&n);
char c='*';

for(int i=n;i>0;i--){
      for(int j=0;j<n-i+1;j++){
          printf("%d",j);
      }printf("\n");

}
    return 0;
}