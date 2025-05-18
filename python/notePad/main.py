#main program
# import sys

while True:
    print("""
    ********** SP Word Processor *********
    Select an option:
    1. Create a new file
    2. Read and existing file
    3. Edit a document
    4. Delete file
    5. Exit program
    ***************************************

    """)

    choice = input("Enter your choice: ")

    match choice:
        case '1':
            pass
        case '2':
            pass
        case '3':
            pass
        case '4':
            pass
        case '5':
            # sys.exit(0) use in production
            # quit()
            break
        case _:
            print("Please select an available option from the list")

print("\nThank you for using SP word processor, goodbye.")
