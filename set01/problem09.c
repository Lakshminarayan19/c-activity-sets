float input(); 
float square_root(float n); 
void output(float n, float sqrroot);

#include<stdio.h>

float input(){
    float n;
    printf("Enter the number");
    scanf("%f",&n);
    return n;
}
float square_root(float n){

    float x = n;
    float y = 1;
    float a = 0.000001;
    while(x-y>a/2)
    {
        x=(x+y)/2;
        y=n/x;
    }
    return x;
}
void output(float n, float sqrroot){
    printf("the sqr root of %.1f is %.1f",n,sqrroot);
}
int main(){
    int n = input();
    int sum =square_root(n);
    output(n,sum);
    return 0;
}