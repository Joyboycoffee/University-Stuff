def replace_spaces(text):
    return text.replace(" ", "_")
print ("{Gourav}, Date: {01-05-2026")
user_input = input("Enter a sentence: ")
result = replace_spaces(user_input)
print("Modified string:", result)
