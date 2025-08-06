# honestly i might just try out grocerydoer here

groceries = []

while true

    println(groceries)

    print("command: ")
    command = readline()

    if command == "quit"
        break
    elseif command == "add"
        print("item: ")
        item = readline()

        if item in groceries
            println("in list")
        else
            push!(groceries, item)
        end
    end
end
