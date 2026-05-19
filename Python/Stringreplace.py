def replace_spaces(text):
    return text.replace(" ", "_")

user_input = input("Enter a sentence: ")
result = replace_spaces(user_input)
print("Modified string:", result)
