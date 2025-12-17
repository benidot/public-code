print("list time")

quitted = false
listy = {}

function quit()
    quitted = true
end

function add()
    local item = io.read()
    table.insert(listy, item)
end

function sortit()
    table.sort(listy)
end

function rev()
    table.sort(listy, function(a, b) return a > b end)
end

function del()
    if #listy > 0 then
        table.remove(listy)
    end
end

function printy() 
    for _, v in ipairs(listy) do
        print(v)
    end
end

commands = {
    q = quit,
    a = add,
    r = rev,
    s = sortit,
    d = del,
    p = printy
}

while not quitted do
    local line = io.read()
    if not line then break end

    local c = string.lower(string.sub(line, 1, 1))
    local cmd = commands[c]
    if cmd then
        cmd()
    else
        print("no")
    end

    if quitted then
        print("goodbye")
    end
end