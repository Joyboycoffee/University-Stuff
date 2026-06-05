print ("{Gourav}, Date: {15-04-2026}")
def organize_registration():
    students = {}
    max_seats = 100
    deadline_open = True

    while True:
        print("\n--- Student Registration ---")
        print("1. Add Student")
        print("2. View Students")

        choice = input("Enter your choice: ")

        if choice == '1':
            if not deadline_open:
                print("Registration closed! Deadline is over.")
                continue

            if len(students) >= max_seats:
                print("Seats are full!")
                continue

            name = input("Enter student name: ")
            course = input("Enter course: ")

            if course.upper() != "MCA":
                print("Only MCA students can register.")
                continue

            verify = input("Is student verified? (y/n): ")
            if verify.lower() != "yes":
                print("Student not verified. Cannot register.")
                continue

            students[name] = {
                "course": course,
                "verified": True
            }

            print(f"{name} registered successfully!")

        elif choice == '2':
            print("\nRegistered Students")
            if not students:
                print("No students registered yet.")
            else:
                for name, details in students.items():
                    print(f"Name: {name}, Course: {details['course']}\n")

organize_registration()