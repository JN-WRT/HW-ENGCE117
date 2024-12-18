/*
    เขียนโปรแกรมรับ "ชื่อ" จากผู้ใช้ และแสดงผลบนหน้าจอดังผลลัพธ์ด้านล่างต่อไปนี้ 
    
    Test case:
        First Name: Aomsin
        Last Name: AomMoney
    Output:
        Aomsin AomMoneys TC, RMUTL, Chiang Mai, Thailand

    Test case:
        First Name: ABC
        Last Name: DEF
    Output:
        ABD DEFs TC, RMUTL, Chiang Mai, Thailand
*/
#include <stdio.h>
int main() {
    char FirstName,LastName ;
    printf ( "First Name : " ) ;
    scanf ( " %s", &FirstName ) ;
    printf ("Last Name : ") ;
    scanf ( " %s", &LastName ) ;
    printf ( "%s %s TC, RMUTL, Chiang Mai, Thailand\n", &FirstName, &LastName ) ;
    return 0 ;
}