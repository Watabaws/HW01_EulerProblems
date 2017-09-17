#include <stdio.h>   

int problem1(){
    int num = 1;
    int ctr = 0;
    int sum = 0;
    while(num < 1000){
        if(num % 5 == 0 || num % 3 == 0){
            sum += num;
        }
        num++;
    }
    printf("%d", sum);
    return 0;
}

int checkDivis(int N){
    int dB = 1;
    int bool = 0;
    while(dB <= 20){
        bool += N % dB;
        dB++;
    }
    return bool;
}

int problem5(){
    int num = 2520;
    while(checkDivis(num) != 0){
        num+=10;
    }
    return num;
}

int sumSquare(int maxn){
    int num = 1;
    int sum = 0;
    while(maxn >= num){
        sum += num * num;
        num++;
    }
    return sum;
}

int squareSum(int maxn){
    int num = 1;
    int sum = 0;
    while(maxn >= num){
        sum += num;
        num++;
    }
    return sum * sum;
}

int problem6(){
    return squareSum(100) - sumSquare(100);
}
    


int main(){
    printf("%d \n", problem6());
}
    
