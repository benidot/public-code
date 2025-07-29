# tax calculator

salary = float(input('salary in $: '))
tax = float(input('tax %: '))

taxA = salary * (tax/100)

print(f"{salary}$ - {tax}% ({taxA}$) = {salary - (salary*tax/100)}$")