#include<stdio.h>
int main(){
    int a; 
    scanf("%d", &a);
    double arr[a], Max,avg;
    
    for(int i=0;i<a;i++)
    scanf("%lf", &arr[i]);
    
    for(int i=0;i<a;i++)
        if(arr[i]>Max)
            Max=arr[i];
    
    for(int i=0;i<a;i++){
        arr[i]=arr[i]/Max*100.0;
        avg += arr[i];
    }
    
    printf("%f", avg/a);
}