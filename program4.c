
#include <stdio.h>
#include <limits.h>  
#include <float.h>   

int main() {
    printf("My name is Jaymin\n");
    printf("=== Discover the Data Types ===\n\n");

    
    printf("Data Type: char\n");
    printf("Size: %lu byte(s)\n", sizeof(char));
    printf("Range: %d to %d\n\n", CHAR_MIN, CHAR_MAX);

    
    printf("Data Type: unsigned char\n");
    printf("Size: %lu byte(s)\n", sizeof(unsigned char));
    printf("Range: 0 to %u\n\n", UCHAR_MAX);

    
    printf("Data Type: int\n");
    printf("Size: %lu byte(s)\n", sizeof(int));
    printf("Range: %d to %d\n\n", INT_MIN, INT_MAX);

    
    printf("Data Type: unsigned int\n");
    printf("Size: %lu byte(s)\n", sizeof(unsigned int));
    printf("Range: 0 to %u\n\n", UINT_MAX);


    printf("Data Type: short int\n");
    printf("Size: %lu byte(s)\n", sizeof(short int));
    printf("Range: %d to %d\n\n", SHRT_MIN, SHRT_MAX);

    
    printf("Data Type: unsigned short int\n");
    printf("Size: %lu byte(s)\n", sizeof(unsigned short int));
    printf("Range: 0 to %u\n\n", USHRT_MAX);

    
    printf("Data Type: long int\n");
    printf("Size: %lu byte(s)\n", sizeof(long int));
    printf("Range: %ld to %ld\n\n", LONG_MIN, LONG_MAX);

    
    printf("Data Type: unsigned long int\n");
    printf("Size: %lu byte(s)\n", sizeof(unsigned long int));
    printf("Range: 0 to %lu\n\n", ULONG_MAX);

    
    printf("Data Type: float\n");
    printf("Size: %lu byte(s)\n", sizeof(float));
    printf("Range: %.3e to %.3e\n\n", FLT_MIN, FLT_MAX);

    
    printf("Data Type: double\n");
    printf("Size: %lu byte(s)\n", sizeof(double));
    printf("Range: %.3e to %.3e\n\n", DBL_MIN, DBL_MAX);

    
    printf("Data Type: long double\n");
    printf("Size: %lu byte(s)\n", sizeof(long double));
    printf("Range: %.3Le to %.3Le\n\n", LDBL_MIN, LDBL_MAX);

    return 0;
}


