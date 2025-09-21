# Monogram
connecting to Pi Sense Hat to display moving initials
The BZ file, when compiled, displays the uppercase letters BZ in white sequentially, split by a shamrock display in green.
Only one letter or symbol is displayed at a time, displayed for 1 second each before turning black and
either displaying the next symbol or exiting.

To Compile
in order to compile the BZ file, use:

cc -o bmzifcak BZ.c -L ~/lib -I ~/include -lsense

Meanings of the flags:
-L ~/lib : Look for libraries in ~/lib (i.e., in the "lib" directory under my home)
-I ~/include : Look for extra header files in ~/include (i.e., the "include" directory in my home)
-lsense : link with the file libsense.a (you created this when you installed the sense library)
