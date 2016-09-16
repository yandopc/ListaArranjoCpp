clang++ -c main.cpp
clang++ -c array.cpp
clang++ -o teste main.o encadeada.cpp array.o
rm -r *.o
./teste
