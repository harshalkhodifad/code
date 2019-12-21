Personal helper repo.

# C Compiler Stages

$ gcc -E HelloWorld.c -o HelloWorldOutput # PreProssing

$ gcc -S HelloWorld.c -o HelloWorld.s     # Compile -- Assembly

$ gcc -c HelloWorld.c -o HelloWorld.o     # Machine Code (Assembler) - ELF stands for executable and linkable format

$ gcc HelloWorld.c -o Output              # Linker -- puts function addresses + standard routine -- big file

# Copy file in clipboard
$ xclip -sel c < filepath
