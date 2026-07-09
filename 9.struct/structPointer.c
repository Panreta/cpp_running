/*
struct tag { 
    member-list
    member-list 
    member-list  
    ...
} variable-list ;
*/


#include <stdio.h>
#include <string.h>

struct Books
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
} book;

//tag、member-list、variable-list 这 3 部分至少要出现 2 个
// there is actually no string in c, only char array end with \0
void printBook( struct Books *book );// fix 1: take in a pointer

int main( )
{
    char site[7] = {'R', 'U', 'N', 'O', 'O', 'B', '\0'};
   printf("菜鸟教程: %s\n", site );

   struct Books Book1;        /* 声明 Book1，类型为 Books */
   struct Books Book2;        /* 声明 Book2，类型为 Books */
 
   /* Book1 详述 */
   strcpy( Book1.title, "C Programming");
   strcpy( Book1.author, "Nuha Ali");
   strcpy( Book1.subject, "C Programming Tutorial");
   Book1.book_id = 6495407;

   /* Book2 详述 */
   strcpy( Book2.title, "Telecom Billing");
   strcpy( Book2.author, "Zara Ali");
   strcpy( Book2.subject, "Telecom Billing Tutorial");
   Book2.book_id = 6495700;
 
   printBook( & Book1 );// fix 2: pass in the address of Book1,2
   printBook( &Book2 );

   return 0;
}

void printBook( struct Books * book )
{
   printf( "Book title : %s\n", book->title);// short for (*book).title
   printf( "Book author : %s\n", (*book).author);
   printf( "Book subject : %s\n", book->subject);
   printf( "Book book_id : %d\n", book->book_id);
   printf("\n");
}