#include <stdio.h>
int selectFunction(char product[]);

int main(void){
    printf("-----ȯ���մϴ�-----\n");
    int kiosk = 10;
    int count = 0;
    int sales = 0;
    int total = 0;
    int totalPrice = 0;
    printf("1�� �Է��ϰ� Ű����ũ�� �����ϼ���\n");
    printf("����: 0\n �Է�: ");
    scanf("%d", &kiosk); //���� �ǻ� Ȯ�ο�
       
        while (kiosk == 1) //Ű����ũ ����
        {   
            int order = 10;
            total = 0;
            totalPrice = 0;
            printf("�ֹ��� �����Ϸ��� 1�� �Է��ϼ���\n Ű����ũ ����: 0\n �Է�: ");
            scanf("%d", &order);
            if (order == 0)
            {
                break;
            }
            if (order == 1) //�ֹ�ǥ
            {
                
                char menu1[] = "1. Ŭ��������ġ";
                char menu2[] = "2. ��ġ�������ġ";
                char menu3[] = "3. �ݶ�";
                char menu4[] = "4. ���̴�";
                char menu5[] = "5. �������ֽ�";
                int price1 = 6000;
                int price2 = 7000;
                int price3 = 2000;
                int price5 = 2500;
                printf("\n--�޴�--\n");
                printf("%s %d��\n", menu1, price1);
                printf("%s %d��\n", menu2, price2);
                printf("%s %d��\n", menu3, price3);
                printf("%s %d��\n", menu4, price3);
                printf("%s %d��\n", menu5, price5);
                printf("------------------------------\n");

                int nextOrder = 1;
                while (nextOrder == 1) //�ֹ�������
                {
                int select = 0;
                printf("\n�ֹ��Ͻ÷��� �ش� ��ǰ�� ��ȣ�� �Է��Ͻʽÿ�\n �Է�: ");
                scanf("%d", &select);

                if(select == 1) {
                    int innerCount = selectFunction(menu1);
                    total += innerCount;
                    totalPrice += price1 * innerCount;
                } else if (select == 2) 
                {
                    int innerCount = selectFunction(menu2);
                    total += innerCount;
                    totalPrice += price2 * innerCount;
                } else if (select == 3) 
                {
                    int innerCount = selectFunction(menu3);
                    total += innerCount;
                    totalPrice += price3 * innerCount;
                } else if (select == 4) 
                {
                    int innerCount = selectFunction(menu4);
                    total += innerCount;
                    totalPrice += price3 * innerCount;
                } else if (select == 5) 
                {
                    int innerCount = selectFunction(menu5);
                    total += innerCount;
                    totalPrice += price5 * innerCount;
                }

                printf("\n�ֹ��� �߰��Ϸ��� 1 �����Ϸ��� 0�� �Է��ϼ���\n �Է�: ");
                scanf("%d", &select);
                if (select == 0) 
                {
                    nextOrder = 0;
                }
            }
            count += total;
            sales += totalPrice;
            printf("\n�� %d���Դϴ�. �ȳ������ʽÿ�.\n", totalPrice);
            printf("\n-----�ݰ����ϴ�-----\n");
            
        }
        }
        printf("\n�� �Ǹ� ������ %d��, �� ������ %d�� �Դϴ�.", count, sales);
    return 0;
}

int selectFunction(char product[]) 
{
    int innerCount = 0;
    printf("\n%s�� � �ֹ��Ͻðڽ��ϱ�?\n �Է�: ", product);
    scanf("%d", &innerCount);
    printf("\n%s�� %d�� �ֹ��մϴ�\n", product, innerCount);
    return innerCount;
}