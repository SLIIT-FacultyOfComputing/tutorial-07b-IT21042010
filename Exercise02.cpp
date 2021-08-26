#include "Rectangle.h"
#include "Circle.h"
#include <iostream>
using namespace std;

int main() {
  // ========= DO NOT CHANGE THE INPUT CODE BELOW ==================
   int length, width, radius;
   cout << "Enter length of Rectangle : ";
   cin >> length;
   cout << "Enter width of Rectangle : ";
   cin >> width;
   cout << "Enter radius of Circle : ";
   cin >> radius;
   // ======== DO NOT CHANGE THE CODE GIVEN ABOVE ====================
   
   // 1. Create a dynamic Rectangle type variable (pointer)
   Rectangle *rec1;
   rec1 = new Rectangle();
   // 2. Create a dynamic Rectangle Object set the length and width that was input from the keyboard
   Rectangle *rec2;
   rec2 = new Rectangle(width,length);
   // 3. Create a dynamic Circle type variable (pointer)
   Circle *cir1;
   cir1 = new Circle();
   // 4. Create a dynamic Circle Object set radius that was input from the keyboard
   Circle *cir2;
   cir2 = new Circle(radius);
   // 5. Call the display method of the Rectangle Object
   rec2 -> display();
   // 6. Call the display method of the Circle Object
   cir2 -> display();
   // 7. Delete the Rectangle Object from memory
   delete rec2;
   // 8. Delete the Circle Object from memory
   delete cir2;
  
  
   // ============ DO NOT CHANGE THE CODE BELOW ===================
   cout << "End of Program" << endl;
  
}
