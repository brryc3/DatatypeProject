text = "25"
number = int(text)

print("String value:", text)
print("Converted integer:", number)

try:
    result = "Age: " + 21
    print(result)
except TypeError as error:
    print("Invalid operation error:", error)