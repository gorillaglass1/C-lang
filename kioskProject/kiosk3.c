#include <stdio.h>
int selectFunction(int productnum, char product[]);

int main(void){
    printf("-----환영합니다-----\n");
    int kiosk = 10;
    int count = 0;
    int sales = 0;
    int total = 0;
    int totalPrice = 0;
    printf("1을 입력하고 키오스크를 실행하세요\n");
    printf("종료: 0\n 입력: ");
    scanf("%d", &kiosk); //실행 의사 확인용
       
        while (kiosk == 1) //키오스크 영역
        {   
            printf("\n-----반갑습니다-----\n");
            int order = 10;
            total = 0;
            totalPrice = 0;
            printf("주문을 시작하려면 1을 입력하세요\n 키오스크 종료: 0\n 입력: ");
            scanf("%d", &order);
            if (order == 0)
            {
                break;
            }
            if (order == 1) //주문표
            {
                int menunum1 = 1;
                int menunum2 = 2;
                int menunum3 = 3;
                int menunum4 = 4;
                int menunum5 = 5;
                char menu1[] = "클럽샌드위치";
                char menu2[] = "햄치즈샌드위치";
                char menu3[] = "콜라";
                char menu4[] = "사이다";
                char menu5[] = "오렌지주스";
                int price1 = 6000;
                int price2 = 7000;
                int price3 = 2000;
                int price5 = 2500;
                printf("\n--메뉴--\n");
                printf("%d %s %d원\n",menunum1 ,menu1, price1);
                printf("%d %s %d원\n",menunum2 ,menu2, price2);
                printf("%d %s %d원\n",menunum3 ,menu3, price3);
                printf("%d %s %d원\n",menunum4 ,menu4, price3);
                printf("%d %s %d원\n",menunum5 ,menu5, price5);
                printf("------------------------------\n");

                int nextOrder = 1;
                while (nextOrder == 1) //주문페이지
                {
                int select = 0;
                printf("\n주문하시려면 해당 상품의 번호를 입력하십시오\n 상품 번호: ");
                scanf("%d", &select);

                if(select == 1) {
                    int innerCount = selectFunction(menunum1, menu1);
                    total += innerCount;
                    totalPrice += price1 * innerCount;
                } else if (select == 2) 
                {
                    int innerCount = selectFunction(menunum2, menu2);
                    total += innerCount;
                    totalPrice += price2 * innerCount;
                } else if (select == 3) 
                {
                    int innerCount = selectFunction(menunum3, menu3);
                    total += innerCount;
                    totalPrice += price3 * innerCount;
                } else if (select == 4) 
                {
                    int innerCount = selectFunction(menunum4, menu4);
                    total += innerCount;
                    totalPrice += price3 * innerCount;
                } else if (select == 5) 
                {
                    int innerCount = selectFunction(menunum5, menu5);
                    total += innerCount;
                    totalPrice += price5 * innerCount;
                }

                printf("\n주문을 추가하려면 1 종료하려면 0을 입력하세요\n 입력: ");
                scanf("%d", &nextOrder);
            }
            count += total;
            sales += totalPrice;
            printf("\n총 %d개 상품 %d원입니다. 안녕히가십시오.\n", total, totalPrice);
            
        }
        }
        printf("\n총 판매 개수는 %d개, 총 매출은 %d원 입니다.", count, sales);
    return 0;
}

int selectFunction(int productnum, char product[]) 
{
    int innerCount = 0;
    printf("\n%d번 상품 %s를 몇 개 주문하시겠습니까?\n 입력: ", productnum, product);
    scanf("%d", &innerCount);
    printf("\n%s를 %d개 주문합니다\n", product, innerCount);
    return innerCount;
}