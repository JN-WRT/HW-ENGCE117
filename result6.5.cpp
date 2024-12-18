/*
    รับค่าจากผู้ใช้จำนวน 1 ค่า และให้แสดงจำนวนเฉพาะตั้งแต่ค่าแรก จนถึงค่าที่ผู้ใช้กรอก โดยแสดงจำนวนเฉพาะจาก "มาก ไปหา น้อย"
    (โจทย์ข้อนี้ให้ใช้ For Loop เท่านั้น)
    
    Test case:
        Enter number :
            10
    Output:
        7 5 3 2

    Test case:
        Enter number :
            100
    Output:
        97 89 83 79 73 71 67 61 59 53 47 43 41 37 31 29 23 19 17 13 11 7 5 3 2
*/
#include <stdio.h>
#include <stdbool.h>

bool isPrime ( int num ) {
    if ( num < 2 ) {
        return false ; // ตัวเลขที่น้อยกว่า 2 ไม่ใช่จำนวนเฉพาะ
    }
    for ( int i = 2 ; i * i <= num ; i++ ) {
        if ( num % i == 0 ) {
            return false;
        }
    }
    return true;
}

int main () {
    int number ;

    printf ( "Enter number: " ) ;
    scanf ( "%d", &number ) ;

    printf ( "Output:\n" ) ;
    for ( int i = number ; i >= 2 ; i-- ) {
        if ( isPrime ( i ) ) {
            printf ( "%d ", i ) ;
        }
    }

    printf ( "\n" ) ;
    return 0 ;
}
