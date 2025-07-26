def reverse(num) :
    revNum = 0
    while num > 0:
        revNum = revNum*10 + num%10
        num = num//10
    return revNum


print(reverse(1011))