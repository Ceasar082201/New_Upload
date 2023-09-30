

first = input('Enter a Number: ')
print()
operator = input('Operator:(+,-,*,/)  ')
print()
second = input('Enter a Number: ')

first = int(first)
second = int(second)

if operator == '+':
    print()
    print('Total: ',first + second)
elif operator == '-':
	print()
	print('Difference: ',first - second)
elif operator == '*':
	print()
	print('Product: ',first * second)
elif operator == '/':
	print()
	print('Quotient: ',first / secind)
else:
	print('Error 404')
	
	