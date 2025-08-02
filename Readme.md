# Grocery List Calculator

## Program Description
A C program that calculates the total cost of grocery items. The program allows users to input up to 3 items with their names, prices, and quantities, then calculates subtotals and the final total payment.

## Features
- Input up to 3 grocery items
- Calculate subtotal for each item (price × quantity)
- Calculate total payment for all items
- Option to recalculate or exit the program
- Clean console interface with formatted output

## Program Structure
- **Arrays used:**
  - `G_item_KP[3][50]` - Store item names (3 items, max 50 characters each)
  - `G_price_KP[3]` - Store item prices
  - `G_qty_KP[3]` - Store item quantities
  - `G_subtotal_KP[3]` - Store subtotal for each item
  - `G_total_KP` - Store total payment

## Sample Output

### Input Phase
```
---------------------------- 
        Grocery List        
---------------------------- 

Enter item 1: Korean Cup Noodles
Enter item price: 45.00
Enter item quantity: 5

Enter item 2: Cooking Oil
Enter item price: 38.50
Enter item quantity: 2

Enter item 3: Belgian Ice Cream
Enter item price: 50.75
Enter item quantity: 3
```

### Output Phase
```
-------------------------------
        Grocery List:         
-------------------------------

Item 1: Korean Cup Noodles
Item 1 Price: 45.00 Baht
Item 1 Quantity: 5
Item 1 Sub-total Price: 225.00 Baht

Item 2: Cooking Oil
Item 2 Price: 38.50 Baht
Item 2 Quantity: 2
Item 2 Sub-total Price: 77.00 Baht

Item 3: Belgian Ice Cream
Item 3 Price: 50.75 Baht
Item 3 Quantity: 3
Item 3 Sub-total Price: 152.25 Baht

Total Payment = 454.25 Baht

Press 1 to calculate again or 0 to exit:
```

## Calculations
- **Item 1:** Korean Cup Noodles
  - Subtotal: 45.00 × 5 = 225.00 Baht
- **Item 2:** Cooking Oil
  - Subtotal: 38.50 × 2 = 77.00 Baht
- **Item 3:** Belgian Ice Cream
  - Subtotal: 50.75 × 3 = 152.25 Baht
- **Total Payment:** 225.00 + 77.00 + 152.25 = 454.25 Baht

## Usage Instructions
1. Run the program
2. Enter item name, price, and quantity for each of the 3 items
3. Review the calculated results
4. Choose to calculate again (1) or exit (0)

## Technical Notes
- Uses `gets()` function for string input (deprecated but functional)
- Implements `fflush(stdin)` to clear input buffer
- Uses `system("cls")` for console clearing (Windows-specific)
- Currency displayed in Thai Baht (Baht)
