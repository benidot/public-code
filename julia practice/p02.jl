# iterate over string

for i in 1:15
    println()
end

print("gimme a string: ")
string = readline()
for i in 1:15
    println()
end
#print("  ")
for i in 1:length(string)
    print(string[i])
    sleep(0.07)
end

println()
