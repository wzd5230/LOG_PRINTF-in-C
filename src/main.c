#include <stdio.h>

/* Print log message according to the level like log in java. */
#define LOG_LEVEL                       (5)                                     /* log level define */
#define LOG_LEVEL_0                     (0)                                     /* highest level */
#define LOG_LEVEL_1                     (1)
#define LOG_LEVEL_2                     (2)
#define LOG_LEVEL_3                     (3)
#define LOG_LEVEL_4                     (4)
#define LOG_LEVEL_5                     (5)
#define LOG_LEVEL_6                     (6)
#define LOG_LEVEL_7                     (7)
#define LOG_LEVEL_8                     (8)
#define LOG_LEVEL_9                     (9)                                     /* lowest level */

#define LOG_PRINTF(level,...)           do\
                                        {\
                                            if (LOG_LEVEL>=level)\
                                            {\
                                                printf(__VA_ARGS__); \
                                            }\
                                        }while(0)


void main(void)
{
#if 0
#if (0 <= LOG_LEVEL)
	printf("level 0\r\n");
#endif /*  */

#if (1 <= LOG_LEVEL)
	printf("level 1\r\n");
#endif /*  */

#if (2 <= LOG_LEVEL)
	printf("level 2\r\n");
#endif /*  */

#if (3 <= LOG_LEVEL)
	printf("level 3\r\n");
#endif /*  */

#if (4 <= LOG_LEVEL)
	printf("level 4\r\n");
#endif /*  */

#if (5 <= LOG_LEVEL)
	printf("level 5\r\n");
#endif /*  */

#if (6 <= LOG_LEVEL)
	printf("level 6\r\n");
#endif /*  */

#if (7 <= LOG_LEVEL)
	printf("level 7\r\n");
#endif /*  */

#if (8 <= LOG_LEVEL)
	printf("level 8\r\n");
#endif /*  */
#endif

    int a = 999;
    char s[] = "abcdefg";

    LOG_PRINTF(LOG_LEVEL_0, "This is level 0 %s\r\n", s);
    LOG_PRINTF(LOG_LEVEL_1, "This is level 1\r\n");
    LOG_PRINTF(LOG_LEVEL_2, "This is level 2\r\n");
    LOG_PRINTF(LOG_LEVEL_3, "This is level 3\r\n");
    LOG_PRINTF(LOG_LEVEL_4, "This is level 4\r\n");
    LOG_PRINTF(LOG_LEVEL_5, "This is level 5\r\n");
    LOG_PRINTF(LOG_LEVEL_6, "This is level 6\r\n");
    LOG_PRINTF(LOG_LEVEL_7, "This is level 7\r\n");
    LOG_PRINTF(LOG_LEVEL_8, "This is level 8\r\n");
    LOG_PRINTF(LOG_LEVEL_9, "This is level 9\r\n");

}