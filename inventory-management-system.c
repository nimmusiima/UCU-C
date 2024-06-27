#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 10

int main() {
  //defined arrays and data types
  int choice, num_items = 0;
  char items[MAX_ITEMS][5];
  int quantities[MAX_ITEMS];
  float prices[MAX_ITEMS];

  while (1) {
    printf("\nWelcome to the Inventory Management System!\n");
    printf("1. Add grocery item\n");
    printf("2. Show what's in your inventory list\n");
    printf("3. Update items\n");
    printf("4. Calculate total bill\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Add grocery item
    if (choice == 1) {
      if (num_items >= MAX_ITEMS) {
        printf("Your inventory list is full\n");
      } else {
        printf("Enter item name: ");
        scanf("%s", items[num_items]);

        printf("How many?: ");
        scanf("%d", &quantities[num_items]);

        printf("Enter price per item: ");
        scanf("%f", &prices[num_items]);

        num_items++;
        printf("Item added successfully!\n");
      }
    } 
    //Choice two: Show what's in your inventory list
    else if (choice == 2) {
      if (num_items == 0) {
        printf("Inventory is empty!\n");
      } else {
        printf("Inventory:\n");
        for (int i = 0; i < num_items; i++) {
          float total_value = quantities[i] * prices[i];
          printf("%s (%d) - %.2f UGX\n", items[i], quantities[i], total_value);
        }
      }
    } 
    //Choice three: Update items
    else if (choice == 3) {
      if (num_items == 0) {
        printf("Inventory is empty!\n");
      } else {
        char name[50];
        int found = 0;

        printf("Add something else to your list: ");
        scanf("%s", name);

        for (int i = 0; i < num_items; i++) {
          if (strcmp(items[i], name) == 0) {
            printf("How many?: ");
            scanf("%d", &quantities[i]);

            printf("Item updated successfully!\n");
            found = 1;
            break;
          }
        }
      }
    } 
    //Choice four: Calculate total bill
    else if (choice == 4) {
      if (num_items == 0) {
        printf("Inventory is empty!\n");
      } else {
        float total_value = 0;
        for (int i = 0; i < num_items; i++) {
          total_value += quantities[i] * prices[i];
        }

        printf("Total inventory value: %.2f UGX\n", total_value);
      }
    } 
    //Choice five: Exit
    else if (choice == 5) {
      printf("You are leaving the IMS\n");
      return 0;
    } else {
      printf("Invalid choice!\n");
    }
  }

  return 0;
}
