-- lil while loop before class

local i = 0
while (i < 10)
do
    print(i)
    i = i + 1

    io.write('GIMME YOUR NAME INFINITELY! ')
    name = io.read()
    print(name)
end
for i = 1, #name do
    io.write(testing:sub(i, i))
end
