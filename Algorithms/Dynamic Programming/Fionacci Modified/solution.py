# Enter your code here. Read input from STDIN. Print output to STDOUT

i = map(int,raw_input().split())
a = i[0]
b = i[1]
n = i[2]
k = 2

while n!=k:
    c = (b*b)+a
    a = b
    b = c
    k += 1
    
print c