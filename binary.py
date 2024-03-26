print("Write the number in decimal system to convert to binary: ")
number = int(input())
list = []
i = 0

while(number > 0):
    mod = number % 2
    number = number // 2 
    
    list.insert(0,mod)
print(list)