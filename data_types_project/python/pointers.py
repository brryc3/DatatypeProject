numbers = [10, 20, 30]
same_numbers = numbers

same_numbers.append(40)

print("Original list:", numbers)
print("Reference list:", same_numbers)
print("Same object:", numbers is same_numbers)