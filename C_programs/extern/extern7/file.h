#ifndef __FILE_H
#define __FILE_H
static inline  void put(void)
{
 printf("In a file:%s\n",__FILE__);
                          
}			  // It is useless to have a static function declaration in a header file. Becoz definition will not be linked in case 
			  //of static function .
#endif                   // Another way of doing it as give the function definition of function  static inline put() in header file and 

