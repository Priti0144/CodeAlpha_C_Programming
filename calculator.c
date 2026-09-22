 # include <stdio.h>
 
 int main() 
 {
      float num1, num2, result;
      int choice;

      printf("Enter first number: ");
      scanf("%f",&num1);

      printf("Enter second number:");
      scanf("%f",&num2);

      printf("\n1. Addition");
      printf("\n2. Substraction");
      printf("\n3. Multiplication");
      printf("\n4. Divion");

      printf("\nEnter your choice: ");
      scanf("%d", &choice);

      switch(choice){
          case 1:
               result=num1 + num2;
               printf("Addition = %.2f", result);
               break;

          case 2:
              
               result = num1 - num2;
               printf("subtraction = %.2f", result);
               break;

          case 3:
               result = num1 * num2 ;
               printf("Multiplication = %.2f", result);
               break;

          case 4:
              if(num2 !=0)
              {
               result= num1 / num2;
               printf("Division=%.2f , result ");
              }
              else 
              {
               printf("Cannot divide by zero!");
              } 
              break; 
          default:
             printf("Invalid choice!");
          }
     return 0;
      
 }