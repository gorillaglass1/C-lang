#include <stdio.h>
int selectFunction(char product[]);

int main(void){
    printf("-----�ݰ����ϴ�-----\n");
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
            if (order == 1) //�ֹ�������
            {
                
                char menu1[] = "Ŭ��������ġ";
                char menu2[] = "��ġ�������ġ";
                char menu3[] = "�ݶ�";
                char menu4[] = "���̴�";
                char menu5[] = "�������ֽ�";
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
                while (nextOrder == 1)
                {
                int select = 0;
                printf("�ֹ��Ͻ÷��� �ش� ��ǰ�� ��ȣ�� �Է��Ͻʽÿ�\n");
                scanf("%d", &select);

                if(select == 1) {
                    int innerCount = 0;
                    printf("%s�� � �ֹ��Ͻðڽ��ϱ�?\n", menu1);
                    scanf("%d", &innerCount);
                    printf("%s�� %d�� �ֹ��մϴ�\n", menu1, innerCount);
                    total += innerCount; 
                    totalPrice += price1 * innerCount;
                } else if (select == 2) 
                {
                    int innerCount = 0;
                    printf("%s�� � �ֹ��Ͻðڽ��ϱ�?\n", menu2);
                    scanf("%d", &innerCount);
                    printf("%s�� %d�� �ֹ��մϴ�\n", menu2, innerCount);
                    total += innerCount; 
                    totalPrice += price2 * innerCount;
                } else if (select == 3) 
                {
                    int innerCount = 0;
                    printf("%s�� � �ֹ��Ͻðڽ��ϱ�?\n", menu3);
                    scanf("%d", &innerCount);
                    printf("%s�� %d�� �ֹ��մϴ�\n", menu3, innerCount);
                    total += innerCount; 
                    totalPrice += price3 * innerCount;
                } else if (select == 4) 
                {
                    int innerCount = 0;
                    printf("%s�� � �ֹ��Ͻðڽ��ϱ�?\n", menu4);
                    scanf("%d", &innerCount);
                    printf("%s�� %d�� �ֹ��մϴ�\n", menu4, innerCount);
                    total += innerCount; 
                    totalPrice += price3 * innerCount;
                } else if (select == 5) 
                {
                    int innerCount = 0;
                    printf("%s�� � �ֹ��Ͻðڽ��ϱ�?\n", menu5);
                    scanf("%d", &innerCount);
                    printf("%s�� %d�� �ֹ��մϴ�\n", menu5, innerCount);
                    total += innerCount; 
                    totalPrice += price5 * innerCount;
                }

                printf("�ֹ��� �߰��Ϸ��� 1 �����Ϸ��� 0�� �Է��ϼ���\n");
                scanf("%d", &select);
                if (select == 0) 
                {
                    nextOrder = 0;
                }
            }
            count += total;
            sales += totalPrice;
            printf("�� %d���Դϴ�.\n �ȳ������ʽÿ�.\n", totalPrice);
            
        }
        }
        printf("\n�� �ֹ� ������ %d��, �� ������ %d�� �Դϴ�.", count, sales);
    return 0;
}

int selectFunction(char product[]) 
{
    int innerCount = 0;
    printf("%s�� � �ֹ��Ͻðڽ��ϱ�?\n", product);
    scanf("%d", &innerCount);
    printf("%s�� %d�� �ֹ��մϴ�\n", product, innerCount);
    return innerCount;
}