#include <stdio.h>
int selectFunction(char product[]);

int main(void){
    printf("-----반갑습니다-----\n");
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
            int order = 10;
            total = 0;
            totalPrice = 0;
            printf("주문을 시작하려면 1을 입력하세요\n 키오스크 종료: 0\n 입력: ");
            scanf("%d", &order);
            if (order == 0)
            {
                break;
            }
            if (order == 1) //주문페이지
            {
                
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
                printf("%s %d원\n", menu1, price1);
                printf("%s %d원\n", menu2, price2);
                printf("%s %d원\n", menu3, price3);
                printf("%s %d원\n", menu4, price3);
                printf("%s %d원\n", menu5, price5);
                printf("------------------------------\n");

                int nextOrder = 1;
                while (nextOrder == 1)
                {
                int select = 0;
                printf("주문하시려면 해당 상품의 번호를 입력하십시오\n");
                scanf("%d", &select);

                if(select == 1) {
                    int innerCount = 0;
                    printf("%s를 몇개 주문하시겠습니까?\n", menu1);
                    scanf("%d", &innerCount);
                    printf("%s를 %d개 주문합니다\n", menu1, innerCount);
                    total += innerCount; 
                    totalPrice += price1 * innerCount;
                } else if (select == 2) 
                {
                    int innerCount = 0;
                    printf("%s를 몇개 주문하시겠습니까?\n", menu2);
                    scanf("%d", &innerCount);
                    printf("%s를 %d개 주문합니다\n", menu2, innerCount);
                    total += innerCount; 
                    totalPrice += price2 * innerCount;
                } else if (select == 3) 
                {
                    int innerCount = 0;
                    printf("%s를 몇개 주문하시겠습니까?\n", menu3);
                    scanf("%d", &innerCount);
                    printf("%s를 %d개 주문합니다\n", menu3, innerCount);
                    total += innerCount; 
                    totalPrice += price3 * innerCount;
                } else if (select == 4) 
                {
                    int innerCount = 0;
                    printf("%s를 몇개 주문하시겠습니까?\n", menu4);
                    scanf("%d", &innerCount);
                    printf("%s를 %d개 주문합니다\n", menu4, innerCount);
                    total += innerCount; 
                    totalPrice += price3 * innerCount;
                } else if (select == 5) 
                {
                    int innerCount = 0;
                    printf("%s를 몇개 주문하시겠습니까?\n", menu5);
                    scanf("%d", &innerCount);
                    printf("%s를 %d개 주문합니다\n", menu5, innerCount);
                    total += innerCount; 
                    totalPrice += price5 * innerCount;
                }

                printf("주문을 추가하려면 1 종료하려면 0을 입력하세요\n");
                scanf("%d", &select);
                if (select == 0) 
                {
                    nextOrder = 0;
                }
            }
            count += total;
            sales += totalPrice;
            printf("총 %d원입니다.\n 안녕히가십시오.\n", totalPrice);
            
        }
        }
        printf("\n총 주문 개수는 %d개, 총 매출은 %d원 입니다.", count, sales);
    return 0;
}

int selectFunction(char product[]) 
{
    int innerCount = 0;
    printf("%s를 몇개 주문하시겠습니까?\n", product);
    scanf("%d", &innerCount);
    printf("%s를 %d개 주문합니다\n", product, innerCount);
    return innerCount;
}