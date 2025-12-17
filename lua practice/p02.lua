-- lil while loop before class

local i = 0
while (i < 10)
do
    print(i)
    i = i + 1

    io.write('GIMME YOUR NAME INFINITELY! ')
    name = io.read()
    print("hello, ", name)
end