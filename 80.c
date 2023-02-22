#include <stdio.h>
#include <string.h>
 
struct info {
   char student_name[50];
   char favorite_subject[20];
   int id;
};
void display( struct info each_student );
int main() {
   struct info s1;  	 
   strcpy( s1.student_name, "John Digoi");
   strcpy( s1.favorite_subject, "Maths");
   s1.id = 756;
// printing first student details!
   display(s1);
   return 0;
}

void display( struct info each_student ) {
  printf("TechVidvan Tutorial: passing a function to the structures!\n\n");
   printf( "Name of first student: %s\n", each_student.student_name);
   printf( "Favourite subject of first student: %s\n", each_student.favorite_subject);
   printf("ID of first student: %d\n",each_student.id);
}
