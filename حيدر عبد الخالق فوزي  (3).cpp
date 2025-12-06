 Homework – Library Management System Analysis

1. Problem Analysis

1. Identify the Actors:

Librarian

Student

Database/System

2. Define the Goals of Each Actor:

Librarian Goals:

Add, update, and remove books.

Manage student accounts.

Track borrowing and returning operations.

Student Goals:

Search for books.

Borrow a book.

Return a book.

View available books.

System Goals:

Store and manage book and student data.

Track borrowing and returning processes.

Maintain the number of available copies.

3. Analyze Domain Processes, Data, and Constraints

Processes:

Adding new books.

Updating book information.

Borrowing a book.

Returning a book.

Searching for books.

Data:

Book: bookID, title, author, copiesAvailable

Student: studentID, name, department

Borrowing: borrowDate, returnDate

Constraints:

A student cannot borrow a book if no copies are available.

A student has a borrowing limit.

Every borrowing/returning event must be recorded.
4. Identify Key Objects and Their Relationships

Objects:

Student

Book

Librarian

Borrowing


Relationships:

Student ⇆ Book (Many-to-Many via Borrowing)

Librarian → Book (One-to-Many)

Student → Borrowing (One-to-Many)
5. Class Diagram (Text Version)

Class Student {
    studentID
    name
    department
    searchBook()
    borrowBook()
    returnBook()
}

Class Book {
    bookID
    title
    author
    copiesAvailable
    updateBook()
    showInfo()
}

Class Librarian {
    librarianID
    name
    addBook()
    removeBook()
    updateBook()
}

Class Borrowing {
    borrowID
    borrowDate
    returnDate
    recordBorrow()
    recordReturn()
}
2. Requirements Gathering

A. Functional Requirements:
1. The system shall allow students to search for books.
2. The system shall allow borrowing and returning of books.
3. The system shall allow the librarian to add/update books.
4. The system shall display available books.
5. The system shall record all borrowing and returning events.
6. The system shall automatically update the number of available copies.

B. Non-Functional Requirements:
1. Performance: The system must respond quickly.
2. Security: Protect student and book data.
3. Usability: Provide a simple and user-friendly interface.
4. Reliability: The system should have minimal downtime.
5. Maintainability: Easy to update and modify.

C. Requirement Validation Methods:

Reviewing the requirement document with users.

Interviews with students and librarians.

Building a prototype to test the system flow.

Functional testing to ensure correctness.