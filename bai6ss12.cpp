#include <stdio.h>
void increase(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}
void decrease(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}
int main()
{
    int n, i, count, choice, a[100], current = 0, countArrange = 0;
    do
    {
        printf("1.nhap so phan tu va cac phan tu\n");
        printf("2.in ra mang\n");
        printf("3.them 1 phan tu vao vi tri chi dinh\n");
        printf("4.sua 1 phan tu o vi tri chi dinh\n");
        printf("5.xoa 1 phan tu o vi tri chi dinh\n");
        printf("6.xap xep cac phan tu\n");
        printf("7.tim kiem phan tu\n");
        printf("8.thoat\n");
        printf("nhap lua chon ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("nhap n ");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {
                printf("a[%d] = ", current);
                scanf("%d", &a[current]);
                current++;
            }
            countArrange = 0;
            break;
        case 2:
            for (i = 0; i < current; i++)
                printf("%d ", a[i]);
            break;
        case 3:
            int add_index, add_value;
            printf("nhap so can chen va vi tri chen ");
            scanf("%d%d", &add_value, &add_index);
            if (add_index < current)
            {
                for (i = current; i >= add_index; i--)
                {
                    a[i] = a[i - 1];
                    if (i == add_index)
                        a[i] = add_value;
                }
                for (i = 0; i < current + 1; i++)
                    printf("%d ", a[i]);
            }
            else
            {
                a[add_index] = add_value;
                for (i = add_index - 1; i >= n; i--)
                    a[i] = 0;
                for (i = 0; i < add_index + 1; i++)
                    printf("%d ", a[i]);
            }
            countArrange = 0;
            break;
        case 4:
            int update_index, update_value;
            printf("nhap so can thay va vi tri thay ");
            scanf("%d%d", &update_value, &update_index);
            a[update_index] = update_value;
            for (i = 0; i < current; i++)
                printf("%d ", a[i]);
            countArrange = 0;
            break;
        case 5:
            int delete_index;
            printf("nhap vi tri xoa ");
            scanf("%d", &delete_index);
            for (i = delete_index - 1; i < current - 1; i++)
                a[i] = a[i + 1];
            for (i = 0; i < current - 1; i++)
                printf("%d ", a[i]);
            break;
        case 6:
            int choice1;
            printf("1.giam dan\n");
            printf("2.tang dan\n");
            printf("lua chon cach sap xep ");
            scanf("%d", &choice1);
            switch (choice1)
            {
            case 1:
                increase(a, current);
                printf("\n");
                countArrange = 1;
                break;
            case 2:
                decrease(a, current);
                printf("\n");
                countArrange = 1;
                break;
            default:
                printf("\n");
                break;
            }
            break;
        case 7:
            int find_value;
            printf("nhap so can tim ");
            scanf("%d", &find_value);
            printf("vi tri cua phan tu do trong mang la ");
            if (countArrange == 0)
            {
                for (int i = 0; i < current; i++)
                {
                    if (a[i] == find_value)
                    {
                        printf("%d\t", i);
                        count++;
                    }
                }
                printf("\n so phan duoc tim thay co trong mang la %d\n", count);
            }
            else
            {
                int start = 0, end = current, check;
                while (1 < 2)
                {
                    check = (start + end / 2);
                    if (a[check] == find_value)
                    {
                        break;
                    }
                    else if (a[check] > find_value)
                    {
                        end = check - 1;
                    }
                    else
                        start = check + 1;
                }
                printf("vi tri cua phan tu can tim la %d",check);
            }
        }
    } while (choice != 8);
}