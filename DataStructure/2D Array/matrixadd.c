#include<stdio.h>
#include<conio.h>

int main(){

int arr[4][4],arr2[4][4];


printf("Enter matrix : ");
for(int i=0;i<4;i++){

    for(int j=0;j<4;j++){

    scanf("%d",&arr[i][j]);
    }
}


printf("Enter matrix 2 : ");
for(int i=0;i<4;i++){

    for(int j=0;j<4;j++){

    scanf("%d",&arr2[i][j]);
    }
}




printf("Matrix is is ");
for(int i=0;i<4;i++){
        printf("\n");
    for(int j=0;j<4;j++){

    printf("%d ",arr[i][j]+arr2[i][j]);
    }
}

}
