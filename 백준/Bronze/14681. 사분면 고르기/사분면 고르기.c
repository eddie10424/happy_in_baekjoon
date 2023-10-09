// 점의 좌표를 입력받아 어느 사분면에 속하는지 알아내는 프로그램을 작성하라. 단 x,y좌표는 모두 양수나 음수라고 가정한다.
// 1. x , y    int형으로 정의하고 입력받기
// 2. if문 4개
#include <stdio.h>

int main(void){
    int x, y;
    
    scanf("%d %d",&x , &y);
    
    if (x > 0 && y > 0){  // 1사분면
        printf("1 \n");
    }else if (x < 0 && y > 0){  // 2사분면
        printf("2 \n");
    }else if (x < 0 && y < 0){  // 3사분면
        printf("3 \n");
    }else if (x > 0 && y < 0){  // 4사분면
        printf("4 \n");
    }
    
    return 0;
}
