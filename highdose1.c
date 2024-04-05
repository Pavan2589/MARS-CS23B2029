// Online C compiler to run C program online
#include <stdio.h>
int arr[100];

int in(int x){
    for(int i=0;arr[i]!='\0';i++)
        if(arr[i]==x)
            return 0;
    return 1;
}
int isprime(int a){
    for(int i=2;i<a;i++)
        if(a%i==0)
            return 0;
    return 1;
}
void pop(){
    for(int i=0;arr[i]!='\0';i++)
        arr[i]='\0';
}
void print(){
    for(int i=0;arr[i]!='\0';i++)
        printf("%d ",arr[i]);
    printf("\n");
}
void append(int x){
    int i=0;
    while(arr[i]!='\0')
        i+=1;
    arr[i]=x;
}
int check(int a){
    for(int i=2;i<a;i++){
        for(int j=2;j<a/i;j++){
            for(int l=2;l<a/(i*j);l++){
                int k=a/(i*j*l);
    
                if(i*j*k==a && isprime(i) && isprime(j) && isprime(k) && isprime(l) && k>1 && in(i) && in(j) && in(k) && in(l) && i!=j && j!=k && i!=k && i!=l && j!=l && k!=l){
                    append(i);
                    append(j);
                    append(k);
                    append(l);
                    return 1;
                }
            }
        }
    }
    return 0;
}

int main() {
    int a=1;
    int b=2;
    int c=3;
    int d=4;
    while(1){
        printf("%d\n",a);
        if(check(a) && check(b) && check(c) && check(d)){
            print();
            printf("%d %d %d %d",a,b,c,d);
            break;
        }else{
            pop();
            a+=1,b+=1,c+=1,d+=1;
        }
    }
}