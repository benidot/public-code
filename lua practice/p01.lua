-- i'm actually impressed at the ease of use this thing has it's like between python and scratch
-- nvm it's like pythonified c???

io.write('string: ')
local testing = io.read()

print()
for i = 1, #testing do
    io.write(testing:sub(i, i))
end
print('\nlength: ' .. #testing .. '\n')
