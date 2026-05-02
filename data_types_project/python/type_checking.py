value = 10
print("Original value:", value)

value = "hello"
print("After assigning string:", value)

try:
    result = value + 5
    print(result)
except TypeError as error:
    print("Runtime error:", error)