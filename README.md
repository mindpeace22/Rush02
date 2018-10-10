# Rush02
42 Piscine project
Exercise 00
Rush-2
Turn-in directory : ex00/
Files to turn in : Makefile and all necessary files
Allowed functions : write, read, malloc, free
Notes : n/a
• Create a program that takes a characters string as argument and displays the name of the rush in question, as well as its dimensions.
• Executable name: colle-2
• Your source code will be compiled as follows :
    make fclean
    make
• If the argument isn’t a rush, here’s an example of output display :
    $> echo "Ai-je une chance d'avoir plus de 0 ?" | ./colle-2
    aucune
    $>
• Whatever the answer, your line must be ended by a "\n"
• If there is more than one rush, you must display them all alphabetically.
• Example : 
    $> ./colle-00 4 4
    o--o 
    |  |
    |  |
    o--o
    $> ./colle-00 4 4 | ./colle-2
    [rush-00] [4] [4]
    $> ./colle-01 3 4 | ./colle-2
    [rush-01] [3] [4]
    $> ./colle-02 1 1
    A
    $> ./colle-03 1 1
    A
    $> ./colle-04 1 1
    A
    $> ./colle-02 1 1 | ./colle-2
    [colle-02] [1] [1] || [colle-03] [1] [1] || [colle-04] [1] [1]
    $>
• Example for output programs colle-00, colle-01, colle-02 colle-03, colle-04: 
1. colle-00
    $> ./colle-00 5 3
    o---o
    |   |  
    o---o
    $>
    $> ./colle-00 5 1
    o---o
    $>
    $> ./colle-00 1 1
    o
    $>
    $> ./colle-00 1 5
    o 
    |
    |
    |
    o 
    $>
    $> ./colle-00 4 4
    o--o
    |  |
    |  | 
    o--o
    $>
    
2. colle-01   
    $> ./colle-01 5 3
    /***\
    *   * 
    \***/
    $>
    $> ./colle-01 5 1
    /***\
    $>
    $> ./colle-01 1 1
    /
    $>
    $> ./colle-01 1 5
    / 
    *
    *
    *
    \
    $>
    $> ./colle-01 4 4
    /**\
    *  *
    *  *
    \**/
    $>
 
3. colle-02
    $> ./colle-02 5 3
    ABBBA
    B   B
    CBBBC
    $>
    $> ./colle-02 5 1
    ABBBA
    $>
    $> ./colle-02 1 1
    A
    $>
    $> ./colle-02 1 5
    A 
    B
    B
    B
    C
    $>
    $> ./colle-02 4 4
    ABBA
    B  B
    B  B
    CBBC
    $>
    
4. colle-03
    $> ./colle-03 5 3
    ABBBC
    B   B
    ABBBC
    $>
    $> ./colle-03 5 1
    ABBBC
    $>
    $> ./colle-03 1 1
    A
    $>
    $> ./colle-03 1 5
    A 
    B
    B
    B
    A
    $>
    $> ./colle-03 4 4
    ABBA
    B  B
    B  B
    CBBC
    $>
    
5. colle-04    
    $> ./colle-04 5 3
    ABBBC
    B   B
    CBBBA
    $>
    $> ./colle-04 5 1
    ABBBC
    $>
    $> ./colle-04 1 1
    A
    $>
    $> ./colle-04 1 5
    A 
    B
    B
    B
    C
    $>
    $> ./colle-04 4 4
    ABBC
    B  B
    B  B
    CBBA
    $>
    
    
