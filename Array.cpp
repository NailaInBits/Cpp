 #ifndef ARRAY_H
  2 #define ARRAY_H
  3 
  4 #include <iostream>
  5 
  6 const int CAPACITY = 100;
  7 
  8 struct Array
  9 {
 10         int arr[CAPACITY];
 11         int size;
 12 };
 13 
 14 int checkCapacity(int size);
 15 void init(Array &array);
 16 void init(Array &, int, int);
 17 int getSize(const Array &);
 18 
 19 //prints out array 
 20 friend ostream& operator << (ostream &output, const Array &array)
 21 {
 22         output << "{";
 23 
 24         for (int i = 0; i < array.size - 1 ; i++)
 25         {
 26                 output << array.arr[i] << ", ";
 27         }
 28         output << array.arr[array.size-1] << "}";
 29         
 30         return output;
 31 }
 32 
 33 //return new Array object add val to the end of array
 34 friend Array operator +(const Array &array, int val)
 35 {
 36         Array newArray;
 37         
 38         for (int i = 0; i < CAPACITY; i++)
 39         {
 40                 newArray.arr =  array.arr[i];
 41         }
 42         newArray.size = array.size;
 43         newArray.arr[newArray.size] = val;
 44                 newArray.size++;
 45 
 46         return newArray;
 47 }
 48 
 49 //appends????
 50 friend Array operator +=(Array &array, int val)
 51 {
 52         array.arr[array.size] = val;
 53         array.size ++;
 54 
 55         return array;
 56 }
 57 
 58 //adds array1 and array2
 59 friend Array operator +(const Array &array1, const Array &array2)
 60 {
 61         Array newArray;
 62 
 63         for (int i = 0; i < array1.size; i++)
 64         {
 65                 newArray.arr[i] = array1.arr[i];
 66         }
 67 
 68         for (int j = array1.size; j < (array1.size + array2.size); j++)
 69 }
 70 
 71 
 72 
 73 void insert(Array &array, int pos, int val);
 74 int remove(Array &array, int pos);
 75 int find(const Array &array, int val);
 76 bool contains(const Array &array, int val);
 77 int &elementAt(Array &array, int pos);
 78 
 79 #endif
