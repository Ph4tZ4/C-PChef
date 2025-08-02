#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char G_item_KP[3][50]; // ชื่อสินค้า 3 ชิ้น
    float G_price_KP[3];   // ราคาสินค้า
    int G_qty_KP[3];       // จำนวนสินค้า
    float G_subtotal_KP[3]; // ยอดรวมแต่ละรายการ
    float G_total_KP = 0.0; // ยอดรวมทั้งหมด

    int x_KP = 1;
    while (x_KP == 1) {
        system("cls"); // ล้างหน้าจอ

        printf("\n");
        printf("---------------------------- \n");
        printf("        Grocery List        \n");
        printf("---------------------------- \n");

        // รับค่าจากผู้ใช้
        for (int i = 0; i < 3; i++) {
            printf("\nEnter item %d: ", i + 1);
            fflush(stdin);
            fgets(G_item_KP[i], sizeof(G_item_KP[i]), stdin);
            
            // ลบ newline character ที่ fgets เพิ่มเข้ามา
            G_item_KP[i][strcspn(G_item_KP[i], "\n")] = 0;

            printf("Enter item price: ");
            scanf("%f", &G_price_KP[i]);

            printf("Enter item quantity: ");
            scanf("%d", &G_qty_KP[i]);

            // Clear input buffer
            while (getchar() != '\n');

            // คำนวณ Sub-total
            G_subtotal_KP[i] = G_price_KP[i] * G_qty_KP[i];
        }

        // คำนวณ Total
        G_total_KP = 0.0;
        for (int i = 0; i < 3; i++) {
            G_total_KP += G_subtotal_KP[i];
        }

        // แสดงผลลัพธ์
        printf("\n\n-------------------------------\n");
        printf("\nGrocery List:\n");
        printf("\n-------------------------------\n");

        for (int i = 0; i < 3; i++) {
            printf("\nItem %d: %s\n", i + 1, G_item_KP[i]);
            printf("Item %d Price: %.2f Baht\n", i + 1, G_price_KP[i]);
            printf("Item %d Quantity: %d\n", i + 1, G_qty_KP[i]);
            
            // Format sub-total price to show as whole number when appropriate
            if (G_subtotal_KP[i] == (int)G_subtotal_KP[i]) {
                printf("Item %d Sub-total Price: %d Baht\n", i + 1, (int)G_subtotal_KP[i]);
            } else {
                printf("Item %d Sub-total Price: %.2f Baht\n", i + 1, G_subtotal_KP[i]);
            }
        }

        printf("\n\nTotal Payment = %.2f Baht\n", G_total_KP);

        printf("\n\nPress 1 to calculate again or 0 to exit: ");
        scanf("%d", &x_KP);
        
        // Clear input buffer after scanf
        while (getchar() != '\n');
    }

    printf("\nThank you for using our program!\n");
    return 0;
}
