#include <stdio.h>

typedef struct menuboard {
    int num;
    char* menu;
    int price;
    char* character;
} Menu;

const Menu menu[5] = {
    {1, "클럽샌드위치", 6000, "고소한 베이컨, 담백한 치킨 슬라이스에 햄까지 더해 완벽해진 조화를 즐겨보세요!"},
    {2, "햄치즈샌드위치", 7000, "햄과 치즈의 완벽한 조합, 시그니처 메뉴에요"},
    {3, "콜라", 2000, "갈증해소 뿐만이 아니라 기분까지 상쾌하게!"},
    {4, "사이다", 2000, "청량함에 레몬, 라임향을 더한 시원함!"},
    {5, "오렌지주스", 2500, "비타민 C를 함유한 상큼한 오렌지주스"}
};

int orderedList[5] = {0, 0, 0, 0, 0}; //인덱스 = 메뉴번호, 값 = 주문 개수
int totalPriceCount(int price, int count);

int main(void){
    printf("-----환영합니다-----\n"); //시스템 ex). windows
    int kiosk, order = 10;
    int count, sales, total, totalPrice, orderCount, select = 0;
    printf("1을 입력하고 키오스크를 실행하세요\n");
    printf("종료: 0\n입력: ");
    scanf("%d", &kiosk); //실행 의사 확인용

        while (kiosk == 1) //키오스크 영역
        {   
            int orderedList[5] = {0, 0, 0, 0, 0}; //인덱스 = 메뉴번호, 값 = 주문 개수
            printf("\n-----반갑습니다-----\n");
            total = 0;
            totalPrice = 0;
            printf("주문을 시작하려면 1을 입력하세요\n키오스크 종료: 0\n입력: ");
            scanf("%d", &order);
            if (order == 0)
            {
                break;
            }
            if (order == 1) //주문표
            {
                printf("\n--메뉴--\n");
                for(int i = 0; i < 5; i++) {
                    printf("%d번 메뉴: %s %d원\n %s\n", menu[i].num, menu[i].menu, menu[i].price, menu[i].character);
                    printf("------------------------------\n\n");
                }
                int nextOrder = 1;
                while (nextOrder == 1) //주문페이지
                {
                select = 0;
                orderCount = 0;
                printf("\n주문하시려면 해당 상품의 번호와 개수를 입력하십시오 ex. 1 2 = 클럽샌드위치 2개\n입력: ");
                scanf("%d %d", &select, &orderCount);

                orderedList[(select-1)] += orderCount;
                printf("%s가 %d개 주문되었습니다.\n\n", menu[(select-1)].menu, orderCount);
                total += orderCount;
                totalPrice += totalPriceCount(menu[(select-1)].price, orderCount);

                printf("\n\n===장바구니===\n:");
                    for(int i = 0; i < 5; i++) {
                        if(orderedList[i] != 0) 
                            printf("  %s %d개 ||", menu[i].menu, orderedList[i]);
                    }
                printf("\n\n주문을 추가하려면 1 종료하려면 0을 입력하세요\n입력: ");
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

int totalPriceCount(int price, int count) {
    return price * count;
}