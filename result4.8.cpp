/*
    จงแปลงเลขฐาน 16 ที่รับมาจากผู้ใช้ให้กลายเป็นเลขฐาน 2
    
    Test case:
        User input :
            FB
    Output:
        11111011

    Test case:
        User input :
            19
    Output:
        11001
*/

#include <stdio.h>
#include <ctype.h>

int hexToBinary ( char c ) {
    int value ;
    
    if ( isdigit ( c ) ) {
        value = c - '0' ;
    } else if ( isxdigit ( c ) ) {
        value = toupper ( c ) - 'A' + 10 ;
    } else {
        printf ( "Invalid input. \n" ) ;
        return -1 ;
    }

    return value ;
}

int main() {
    char hex[100] ;
    
    printf("Enter number: " ) ;
    scanf ( "%s", hex ) ;

    printf ( "Binary: " ) ;
    for ( int i = 0 ; hex[i] != '\0' ; i++ ) {
        int value = hexToBinary ( hex[i] ) ;

        if ( value != -1 ) {
            for ( int j = 3 ; j >= 0 ; j-- ) {
                printf ( "%d", ( value >> j ) & 1 ) ;
            }
        }
    }

    printf("\n");
    return 0;
}