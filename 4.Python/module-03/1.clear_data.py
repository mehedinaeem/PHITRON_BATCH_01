data=input()
new_data=data.lower()
# print(new_data)
output_data=""

for c in new_data:
    # print(c,end=' ')
    if c=='a' or c=='e' or c=='i' or c=='o' or c=='u':
        # print(f"{c} found")
        output_data += c
        
print(output_data)


# data = "FGSHBBHSCJKONASEH7/<.J"
# new_data = data.lower()

# output_data = ""

# for c in new_data:
#     if c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u':
#         output_data += c

# print(output_data)
